#include <iostream>
#include "LinkedList.h"
#include <iomanip>
#include <map>
#include <fstream>
#include <vector>
#include <string>

bool fileExists(const std::string& filename);
void readStockFile(std::string filename, LinkedList *stockList);
void readCoinFile(std::string filename, std::map<int, Coin> &coins);
void displayMenu();
void displayItems(LinkedList *stockList);
void addItem(LinkedList *stockList);
void removeItem(LinkedList *stockList);
bool testPrice(std::string testString);
int purchase(LinkedList *stockList);
void resetStock(LinkedList *stockList);
int valueToDenom(int input);
int denomToValue(Denomination denom);
void purchaseItem(LinkedList *stockList, std::map<int, Coin> &coins);
void saveCoinFile(std::string filename, std::map<int, Coin> &coins);
void saveStockFile(std::string filename, LinkedList *stockList);

void outS(std::string out_str);
std::string inpS();

std::vector<std::string> testFileContents;
void testFileProcesser();

bool testMode;

std::string testInputFile;
std::fstream testActualOutputFile;

std::fstream testCoinOutputFile;


bool inspectMode = false; // Change to see outbut both in file and console

/**
 * manages the running of the program, initialises data structures, loads
 * data, display the main menu, and handles the processing of options. 
 * Make sure free memory and close all files before exiting the program.
 **/
int main(int argc, char **argv)
{
    if (argc == 5){
        testMode = true;
        testInputFile = std::string((argv[3]));
        testActualOutputFile.open(std::string((argv[4])),std::fstream::out);
        testCoinOutputFile.open(std::string((argv[3])).substr(0,std::string((argv[3])).length() - 6) + ".actual_ppd_save_coins",std::fstream::out);
    }
    else if (argc == 3){
        testMode = false;
    }
    else{
        std::cout << "Invalid argument use" << std::endl;
        std::cout << std::endl;
        return EXIT_FAILURE;
    }

    // creating string variables to store argument file names
    std::string stockData = std::string((argv[1]));
    std::string coinsData = std::string((argv[2]));

    // checking whether the files passed in argument exist
    if (!fileExists(stockData)) {
        std::cout << "Stock file not found" << std::endl;
        return EXIT_FAILURE;
    }
    if (!fileExists(coinsData)) {
        std::cout << "Coins file not found" << std::endl;
        return EXIT_FAILURE;
    }
    if(testMode){
        if (!fileExists(testInputFile)) {
        std::cout << "Input file not found" << std::endl;
        return EXIT_FAILURE;
    }
    }

    // creating a linkedList pointer for the purchase list
    LinkedList *stockList = new LinkedList();
    // creating a std::map object called coins 
    std::map<int, Coin> coins;
    // reading the files from the command argument
    readStockFile(stockData, stockList);
    readCoinFile(coinsData, coins);

    // creating bool exit checks
    bool isOver = false;
    bool save = false;

    Coin coin;
    testFileProcesser();

    while (!isOver) {
        displayMenu(); // Displaying the Menu
        std::string tmp;
        std::string choice;

        tmp = inpS();

        choice = tmp;
        if      (choice == "1") { // Display Items
            displayItems(stockList);
        } 
        else if (choice == "2") { // Purchase Items
          purchaseItem(stockList, coins);
        } 
        else if (choice == "3") { // Save and Exit
            isOver = true;
            save = true;
        } 
        else if (choice == "4") { // Add Item
            addItem(stockList);
        } 
        else if (choice == "5") { // Remove Item
            removeItem(stockList);
        } 
        else if (choice == "6") { // Display Coins
            outS(coin.displayCoins(coins));
        } 
        else if (choice == "7") { // Reset Stock
            resetStock(stockList);
        } 
        else if (choice == "8") { // Reset Coins
            std::string asd = coin.resetCoins(DEFAULT_STOCK_LEVEL, coins);
            outS(asd);
        } 
        else if (choice == "9") { // aborthing the program
            isOver = true;
            outS("THE PROGRAM HAS BEEN ABORTED");
        } 
        else if (choice == "help") { // aborthing the program
            outS("Please enter a number from 1 to 9 for the dedicated action");
        } 
        else {                  // Invalud input
            outS("Invalid input");
        }
    }

    if (save) { // Save Stock and Coin files
      saveCoinFile(coinsData, coins);
      saveStockFile(stockData, stockList);
    }

    delete stockList; // Deleting the list

    for (auto i = coins.rbegin(); i != coins.rend(); i++) // saving coin counts at the end of program
            testCoinOutputFile << denomToValue(i->second.denom)
                      << ","
                      << i->second.count << std::endl;
        testCoinOutputFile.close();

    testActualOutputFile.close();
    testCoinOutputFile.close();
    
    return EXIT_SUCCESS;
}


// Custom function to alternate testing with files and using the console
void outS(std::string out_str){
    if (testMode){
        // test output write to file
        testActualOutputFile << out_str << std::endl;
        if(inspectMode)std::cout << out_str << std::endl;
    }
    else {
        std::cout << out_str << std::endl;
    }
}
std::string inpS(){
    std::string inp;

    if (testMode){
        inp = testFileContents.front();
        testFileContents.erase(testFileContents.begin());

        if(inspectMode)std::cout << inp << std::endl;
    }
    else {
        std::cin >> inp;
    }
    return inp;
}



void testFileProcesser(){
    std::string line;
    std::ifstream file(testInputFile);
    while (std::getline(file,line)){
        testFileContents.push_back(line);
    }
}




int valueToDenom(int input)
{
    int ret;
    if(input == 5)          ret = FIVE_CENTS;
    else if(input == 10)    ret = TEN_CENTS;
    else if(input == 20)    ret = TWENTY_CENTS;
    else if(input == 50)    ret = FIFTY_CENTS;
    else if(input == 100)   ret = ONE_DOLLAR;
    else if(input == 200)   ret = TWO_DOLLARS;
    else if(input == 500)   ret = FIVE_DOLLARS;
    else if(input == 1000)  ret = TEN_DOLLARS;
    else                    ret = -1;

    return ret;
}
int denomToValue(Denomination denom)
{
    int ret;
    if(denom == FIVE_CENTS)         ret = 5;
    else if(denom == TEN_CENTS)     ret = 10;
    else if(denom == TWENTY_CENTS)  ret = 20;
    else if(denom == FIFTY_CENTS)   ret = 50;
    else if(denom == ONE_DOLLAR)    ret = 100;
    else if(denom == TWO_DOLLARS)   ret = 200;
    else if(denom == FIVE_DOLLARS)  ret = 500;
    else if(denom == TEN_DOLLARS)   ret = 1000;
    else                            ret = 0;
    return ret;
}

// checks if the file of such name exists in the directory
bool fileExists(const std::string& filename)
{
    std::ifstream file(filename.c_str());
    return file.good();
}

// reading the stock data file 
void readStockFile(std::string filename, LinkedList *stockList) {
  std::fstream inputFile(filename);
  // checking whether the file is open
  if (inputFile.is_open()) { 
    std::string line;
    while (std::getline(inputFile, line)) {
      std::stringstream ss(line);
      std::string priceStr, dollarsStr, centsStr, quantityStr;
      Price price;
      Stock *stock = new Stock();
      std::getline(ss, stock->id, '|');
      std::getline(ss, stock->name, '|');
      std::getline(ss, stock->description, '|');
      std::getline(ss, priceStr, '|');
      std::getline(ss, quantityStr, '|');
      std::stringstream priceStream(priceStr);
      std::getline(priceStream, dollarsStr, '.');
      std::getline(priceStream, centsStr, '.');
      price.dollars = stoul(dollarsStr);
      price.cents = stoul(centsStr);
      stock->price = price;
      stock->on_hand = stoul(quantityStr);
      stockList->addSorted(stock);
    }
    // close the file object.
    inputFile.close(); 
  }

}

// reading the coins data file
void readCoinFile(std::string filename, std::map<int, Coin> &coins) {
  std::fstream inputFile(filename);
  // checking whether the file is open
  if (inputFile.is_open()) { 
    std::string line;
    while (std::getline(inputFile, line)) {
      std::stringstream ss(line);
      std::string demomStr, quantityStr;
      std::getline(ss, demomStr, ',');
      std::getline(ss, quantityStr, ',');
      int denom;
      Coin coin;
      denom = stoul(demomStr);
      coin.count = stoul(quantityStr);
      if (denom == 1000) {
        coin.denom = TEN_DOLLARS;
      } else if (denom == 500) {
        coin.denom = FIVE_DOLLARS;
      } else if (denom == 200) {
        coin.denom = TWO_DOLLARS;
      } else if (denom == 100) {
        coin.denom = ONE_DOLLAR;
      } else if (denom == 50) {
        coin.denom = FIFTY_CENTS;
      } else if (denom == 20) {
        coin.denom = TWENTY_CENTS;
      } else if (denom == 10) {
        coin.denom = TEN_CENTS;
      } else if (denom == 5) {
        coin.denom = FIVE_CENTS;
      }
      //Key == denom
      coins[denom] = coin;
    }
    // close the file object.
    inputFile.close(); 
  }
}

// displaying the main menu options
void displayMenu() {
  //std::cout << "Main Menu:" << std::endl;
  outS("Main Menu:");
  //std::cout << "  1.Display Items" << std::endl;
  outS("  1.Display Items");
  //std::cout << "  2.Purchase Items" << std::endl;
  outS("  2.Purchase Items");
  //std::cout << "  3.Save and Exit" << std::endl;
  outS("  3.Save and Exit");
  //std::cout << "Administrator-Only Menu:" << std::endl;
  outS("Administrator-Only Menu:");
  //std::cout << "  4.Add Item" << std::endl;
  outS("  4.Add Item");
  //std::cout << "  5.Remove Item" << std::endl;
  outS("  5.Remove Item");
  //std::cout << "  6.Display Coins" << std::endl;
  outS("  6.Display Coins");
  //std::cout << "  7.Reset Stock" << std::endl;
  outS("  7.Reset Stock");
  //std::cout << "  8.Reset Coins" << std::endl;
  outS("  8.Reset Coins");
  //std::cout << "  9.Abort Program" << std::endl;
  outS("  9.Abort Program");
  //std::cout << "Select your option (1-9): ";
  outS("Select your option (1-9): ");
}

// displaying the items in the stock list
void displayItems(LinkedList *stockList) {
  //std::cout << std::endl;
  outS("");
  //std::cout << "Items Menu" << std::endl;
  outS("Items Menu");
  //std::cout << "----------" << std::endl;
  outS("----------");
  //std::cout << "ID   |Name                                     | Available | Price  "
  //     << std::endl;
  outS("ID   |Name                                     | Available | Price  ");
  //std::cout << "--------------------------------------------------------------------"
  //     << std::endl;
  outS("--------------------------------------------------------------------");

  Node *curr = stockList->getHead();

    std::stringstream ss;

  while (curr != nullptr) {
    //std::cout << std::setw(5) << std::left << curr->data->id << "|" << std::setw(41) << std::left
    //     << curr->data->name << "|" << std::setw(11) << std::left << curr->data->on_hand
    //     << "|$" << std::setw(2) << std::right << curr->data->price.dollars << "."
    //     << std::setw(2) << std::setfill('0') << curr->data->price.cents << std::endl
    //     << std::setfill(' ');

    ss  << std::setw(5) << std::left << curr->data->id << "|"
        << std::setw(41) << std::left << curr->data->name << "|"
        << std::setw(11) << std::left << curr->data->on_hand << "|$"
        << std::setw(2) << std::setfill(' ') << curr->data->price.dollars << "."
        << std::setw(2) << std::setfill('0') << curr->data->price.cents << std::endl
        << std::setfill(' ');




    curr = curr->next;
  }
    outS(ss.str());

}

// testing if price format is correct
bool testPrice(std::string testString){
  bool result = true;

  // test for exact length (e.x. 12.23)
  if (testString.length() != 5){result = false;}
  else{
    // test for '.' on index 2 and any non alnum characters
    if (!(isalnum(testString[0]) and isalnum(testString[1]) and 
          isalnum(testString[3]) and isalnum(testString[4])) or 
          testString.at(2) != '.')    {result = false;}
  }

  return result;
}

Stock *getStockById(LinkedList *stockList, std::string id)
{
    Node *n = stockList->getHead();
    while (n != nullptr)
    {
        if (n->data->id.compare(id) == 0)
            return n->data;
        n = n->next;
    }
    return nullptr;
}


// adding item to the stock list
void addItem(LinkedList *stockList) {
  std::string temp_id , temp_name , temp_description , temp_priceStr;

  //std::cout << "The id of the new stock will be: ";
  outS("The id of the new stock will be: ");
  temp_id = inpS();
  while(getStockById(stockList, temp_id) != nullptr) {
    outS("This ID already exists, please try again");
    temp_id = inpS();
  }
  //std::cout << "Enter the item name: ";
  outS("Enter the item name: ");
  temp_name = inpS();
  //std::cout << "Enter the item description: ";
  outS("Enter the item description: ");
  temp_description = inpS();
  //std::cout << "Enter the price for the item: ";
  outS("Enter the price for the item (please format the price to xx.xx where x represents a digit): ");
  temp_priceStr = inpS();

  // test price input()
  if(!testPrice(temp_priceStr)){
    //std::cout << "Price for item doesnt match required format." << std::endl;
    outS("Price for item doesnt match required format.");
  }
  else{
    Stock *stock = new Stock();
    std::string priceStr;

    stock->id = temp_id;
    stock->name = temp_name;
    stock->description = temp_description;
    priceStr = temp_priceStr;

    std::stringstream priceStream(priceStr);
    std::string dollarsStr, centsStr;
    std::getline(priceStream, dollarsStr, '.');
    std::getline(priceStream, centsStr, '.');
    stock->price.dollars = stoul(dollarsStr);
    stock->price.cents = stoul(centsStr);
    stock->on_hand = DEFAULT_STOCK_LEVEL;
    stockList->addSorted(stock);
    //std::cout << "This item \"" << stock->name << " - " << stock->description
    //    << "\" has now been added to the menu." << std::endl;
    outS("This item \"" + stock->name + " - " + stock->description
        + "\" has now been added to the menu.");

  }
}

// removes the desired item from the stock list
void removeItem(LinkedList *stockList) {
  std::string id;
  //std::cout << "Enter the item id to remove from the menu: ";
  outS("Enter the item id to remove from the menu: ");
  id = inpS();
  Node *node = stockList->removeById(id);
  if (node != nullptr) {
    Stock *stock = node->data;
    //std::cout << "\"" << stock->id << " - " << stock->name << " - " <<
    //            stock->description << "\" has now removed from the system.";
    outS("\"" + stock->id + " - " + stock->name + " - " +
                stock->description + "\" has now removed from the system.");

    delete node;
  }
}


void purchaseItem(LinkedList *stockList, std::map<int, Coin> &coins)
{
    Stock *chosenStock = nullptr;
    std::string tmp;

    std::cout << "Purchase Item" << std::endl;
    std::cout << "-------------" << std::endl;

    do
    {
        std::cout << "Please enter the id of the item you wish to purchase: ";
        std::cin >> tmp;
        chosenStock = getStockById(stockList, tmp);

        // Check if the stock still available
        if (tmp == "help"){
          std::cout << "You need to enter the exact id of an item to urchase. You can see available items with their IDs using command '1' in the menu.";
        }
        else if (chosenStock != nullptr && chosenStock->on_hand <= 0)
            std::cout << chosenStock->name << " cannot be purchased currently." << std::endl;
    } while (chosenStock == nullptr || chosenStock->on_hand <= 0);

    int dollars = chosenStock->price.dollars;
    int cents = chosenStock->price.cents;
    float total = dollars * 100 + cents;

    std::cout << "You have selected \"" << chosenStock->description
              << "\". This will cost you $ " << total/100 << "." << std::endl;

    std::cout << "Please hand over the money - type in the value of each note/coin in cents." << std::endl;
    std::cout << "Press enter or ctrl-d on a new line to cancel this purchase:" << std::endl;

    int input = 0;
    int denomIdx = -1;
    // Placeholder for user's coin count
    std::map<int, int> tempCoins;
    for (const auto &coin : coins)
        if (coin.second.count > 0)
            tempCoins[coin.first] = 0;

    std::cin.ignore(); // Flush the input's enter key
    while (total > 0)
    {
        std::cout << "You still need to give us " << "\033[1;32m$" << total / 100 << "\033[0m :";
        std::getline(std::cin, tmp);
        // Pressed enter to cancel the purchase
        if (tmp == "help"){
          std::cout << "Please enter an ammount of money in cents such as (500 = $5 etc.)";
        }
        else{
          if(tmp.empty())
            return;
          input = stoi(tmp);
          denomIdx = valueToDenom(input);
          if (denomIdx == -1)
          {
              std::cout << "Error: $" << input << " is not a valid denomination of money. Please try again." << std::endl;
          }
          else
          {
              total -= input;
              tempCoins[denomIdx]++;
          }
        }

        
    }

    // Join all coins to temp
    // Because changing uses both given coin and stock coins
    for (const auto &coin : coins)
        if (coin.second.count > 0)
            tempCoins[coin.first] += coin.second.count;

    // Get returns
    std::map<int, int> coinsToBeReturned;
    float totalToBeReturned = total;
    int currDenomIdx = TEN_DOLLARS;
    int currValue = denomToValue((Denomination)currDenomIdx);
    while (total < 0 && currDenomIdx >= FIVE_CENTS)
    {
        // If current denom has run out, then get lower denom
        // If currValue is too high, then get lower denom
        if(tempCoins[currDenomIdx] <= 0 || total + currValue > 0){
            currDenomIdx--;
            currValue = denomToValue((Denomination)currDenomIdx);

        } else {
            // If we still have more coins, then use it as return
            total += currValue;
              if (coinsToBeReturned.count(currDenomIdx) == 0)
                coinsToBeReturned[currDenomIdx] = 0;
            coinsToBeReturned[currDenomIdx]++;
            tempCoins[currDenomIdx]--;
            currDenomIdx--;
            currValue = denomToValue((Denomination)currDenomIdx);
        }
    }
    
    if (currDenomIdx < FIVE_CENTS)
    {
        std::cout << "Changes cannot be made due to lack of available coins." << std::endl;
        return;
    }

    std::cout << "Here is your " << chosenStock->name;
    if (!coinsToBeReturned.empty())
    {
        // If there is a return, print changes from largest to lowest
        std::cout << " and your change of $ " << -totalToBeReturned / 100 << ":";

        for (auto i = coinsToBeReturned.rbegin(); i != coinsToBeReturned.rend(); i++)
        {
            int value = denomToValue((Denomination)i->first);
            for (int j = 0; j < i->second; j++)
                if (value >= 100)
                    std::cout << " $" << value / 100;
                else
                    std::cout << " " << value << "c"; // cents use "c"
        }
    }
    std::cout << std::endl;

    chosenStock->on_hand--;

    // Update new coins count
    for (int i = 0; i <= TEN_DOLLARS; i++)
        coins[i].count = tempCoins[i];
}


void saveStockFile(std::string filename, LinkedList *stockList)
{
    std::ofstream inputFile(filename);
    if (inputFile.is_open())
    {
        Node *n = stockList->getHead();
        while (n != nullptr)
        {
            Stock *s = n->data;
            float price = n->data->price.dollars + ((float)n->data->price.cents) / 100;
            inputFile << s->id << "|" << s->name << "|" << s->description << "|" 
                    << std::fixed << std::setprecision(2) << price << "|" << s->on_hand << std::endl;
            n = n->next;
        }
        
        inputFile.close();
    }
}


void saveCoinFile(std::string filename, std::map<int, Coin> &coins)
{
    std::ofstream inputFile(filename);
    if (inputFile.is_open())
    {

        for (auto i = coins.rbegin(); i != coins.rend(); i++)
            inputFile << denomToValue(i->second.denom)
                      << ","
                      << i->second.count << std::endl;
        inputFile.close();
    }
}


void resetStock(LinkedList *stockList) {
  Node* current = stockList->getHead();
  while (current != nullptr) {
    current->data->on_hand = DEFAULT_STOCK_LEVEL;
    current = current->next;
  }
  // std::cout << "All stock has been reset to the default level of " << DEFAULT_STOCK_LEVEL << std::endl;
  outS("All stock has been reset to the default level of " + std::to_string(DEFAULT_STOCK_LEVEL));

}
