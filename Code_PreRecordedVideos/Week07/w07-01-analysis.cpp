
int stringLength(char* string);

void copyString(char* src, char* dest) {
   if (src != nullptr && dest != nullptr) {
      // int length = stringLength(src);
      // for (int i = 0; i < length; ++i) {
      //    dest[i] = src[i];
      // }

      int i = 0;
      while (src[i] != '\0') {
         dest[i] = src[i];
         ++i;
      }

      // dest[length] = '\0';
      dest[i] = '\0';
   }
}

// Is this code correct?
// Yes, under the assumptions
// 1. The src string is null terminated
// 2. the dest string has enough memory allocated


// Is this code efficient?
// How much "work" does this program do? = 2n+1
// Efficiency of 2nd version is = n+1