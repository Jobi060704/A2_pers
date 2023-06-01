
#include "BST.h"

#include <iostream>
#include <string>

#include "Card.h"

#define EXIT_SUCCESS    0

using std::string;
using std::cout;
using std::endl;

int main(void) {
   // BST<double>* bst = new BST<double>();

   // bst->add(7.2);
   // bst->add(3.4);
   // bst->add(1.2);
   // bst->add(2.7);
   // bst->add(10);
   // bst->add(8);
   // bst->add(11);

   // for (int i = 0; i != 15; ++i) {
   //    cout << "Bst contains " << i << "? " << bst->contains(i) << endl;
   // }

   BST<Card*>* bst = new BST<Card*>();

   bst->add(new Card(RED, 7));
   bst->add(new Card(RED, 1));
   bst->add(new Card(BLUE, 6));
   bst->add(new Card(BLUE, 1));


   std::cout << "DFS****" << std::endl;
   bst->dfs();

   delete bst;
   cout << "Done" << endl;

   return EXIT_SUCCESS;
}
