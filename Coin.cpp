#include "Coin.h"
#include <map>
#include <iostream>
#include <iomanip>
#include <string>

 // implement functions for managing coins; this may depend on your design.
 

// display the coins
std::string Coin::displayCoins(std::map<int, Coin> &coins) {
    
    std::stringstream ss;

    ss << "Coins Summary" << std::endl;
    ss << "---------------" << std::endl;
    ss << std::setw(20) << std::left << "Denomination" << std::setw(1) << std::left << "|" <<
        std::setw(15) << std::right << "Count" << std::endl; 
    ss << "--------------------------------------" << std::endl;
    for (auto itr = coins.begin(); itr != coins.end(); itr++) {
        Coin& coin = itr->second;
        int denom = itr->first;

        if (denom >=100) {
            denom = denom / 100;
            std::string amount = std::to_string(denom);
            ss << std::setw(20) << std::left << amount + " Dollars" << std::setw(1) << std::left << "|" 
                << std::setw(15) << std::right << coin.count << std::endl;
        }
        else {
            std::string amount = std::to_string(denom);
            ss << std::setw(20) << std::left << amount + " Cents" << std::setw(1) << std::left << "|" 
                << std::setw(15) << std::right << coin.count << std::endl;
        }
    }
    return ss.str();
}

// resets the coins
std::string Coin::resetCoins(int value, std::map<int, Coin> &coins) {
    std::string test = std::to_string(value);

    for (auto itr = coins.begin(); itr != coins.end(); itr++) {
        Coin& coin = itr->second;
        coin.count = value;
    }

    std::string ret = "All coins has been reset to the default level of " + test + "\n";

    return ret;

}
