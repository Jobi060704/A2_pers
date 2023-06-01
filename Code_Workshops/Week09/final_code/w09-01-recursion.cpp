#include <iostream>
#include <string>

int factorial(int n);
int fibonacchi(int n);
bool palindrome(char* string);

int main(void) {

   // Implement factorial
   std::cout << factorial(5) << std::endl;
   std::cout << fibonacchi(5) << std::endl;

   char string[] = "kayakS";
   std::cout << palindrome(string) << std::endl;

   return EXIT_SUCCESS;
}


int factorial(int n) {
   int retVal = 0;
   if (n == 0) {
      retVal = 1;
   } else if (n == 1) {
      retVal = 1;
   } else {
      // ASSUME THAT factorial(n-1) is CORRECT
      retVal = factorial(n-1) * n;
   }

   return retVal;
}

//f:     0, 1, 1, 2, 3, 5, 8, ....
//n:     1, 2, 3, 4, 5, 6, 7, ...
int fibonacchi(int n){
   int retVal = 0;

   if(n == 1){
      //base case 1
      retVal = 0;
   }else if(n == 2) {
      //base case 2
      retVal = 1;
   }else{
      //recursive step
      retVal = fibonacchi(n-1) + fibonacchi(n-2);
   }

   return retVal;
}


//kayak, mom, 
bool palindrome(char* string, int start, int last){

   bool retVal = false;

   if(last < start){
      //empty string
      retVal = true;
   }else if(last == start){
      //one character
      retVal = true;
   }else{
      retVal = palindrome(string, start+1, last-1) 
                     && string[start] == string[last];
   }

   return retVal;
}

bool palindrome(char* string){

   // use the version you developed in the lab here
   // int length = strLen(string);

   std::string str(string);
   int length = str.length();

   return palindrome(string, 0, length-1);

}
