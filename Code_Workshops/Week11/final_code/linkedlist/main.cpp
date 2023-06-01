#include <iostream>

#include "LinkedList.h"
#include "LinkedListSize.h"

int main(void) {

   LinkedList* list = new LinkedListSize();
   try {
      list->addBack(1);
      list->addBack(2);
      list->addBack(3);
      list->addBack(4);
   } catch (...) {
      // do something
   }

   try {
      for (unsigned int i = 0; i != list->size(); ++i) {
         std::cout << "list[" << i << "] = " << list->get(i) << std::endl;
      }
   } catch (std::exception& e) {
      std::cout << "General exception: " << e.what() << std::endl;
   }


   return EXIT_SUCCESS;
}
