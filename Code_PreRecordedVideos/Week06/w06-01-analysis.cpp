
int stringLength(char* string);

void copyString(char* src, char* dest) {
   int length = stringLength(src);
   for (int i = 0; i < length; ++i) {
      dest[i] = src[i];
   }
}
