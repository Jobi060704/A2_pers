#include <iostream>

#include "LinkedList.h"

int main(void) {

   LinkedList* list = new LinkedList();
   list->addBack(1);
   list->addBack(2);
   list->addBack(3);
   list->addBack(4);

   for (int i = 0; i != list->size() + 1; ++i) {
      std::cout << "list[" << i << "] = " << list->get(i) << std::endl;
   }

   return EXIT_SUCCESS;
}
