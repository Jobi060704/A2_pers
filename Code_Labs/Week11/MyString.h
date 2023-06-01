#ifndef MYSTRING_H
#define MYSTRING_H

#define MAX_LENGTH   100

#include <fstream>

class MyString {
public:

   MyString(char* string, int length);
   MyString(MyString& other);
   MyString(MyString&& other);
   ~MyString();

   // Compare two string for equality
   bool operator==(const MyString& other) const;

   // Compare two string for lexographical ordering
   bool operator<(const MyString& other) const;

   // Get the character of the string at the index
   char& operator[](const int index);

   // Assign another string into this string
   MyString& operator=(const MyString& other);

private:
   char string[MAX_LENGTH];
   int length;
};

// Write the string to standard output
std::ostream& operator<<(std::ostream& os, MyString& point);

#endif // MYSTRING_H