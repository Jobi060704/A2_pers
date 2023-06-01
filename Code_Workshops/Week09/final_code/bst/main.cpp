
#include "BST.h"

#include <iostream>
#include <string>

#define EXIT_SUCCESS    0

using std::string;
using std::cout;
using std::endl;

int main(void) {
   BST* bst = new BST();

   bst->add(7);
   bst->add(3);
   bst->add(1);
   bst->add(2);
   bst->add(10);
   bst->add(8);
   bst->add(11);

   for (int i = 0; i != 15; ++i) {
      cout << "Bst contains " << i << "? " << bst->contains(i) << endl;
   }

   delete bst;
   cout << "Done" << endl;

   return EXIT_SUCCESS;
}
