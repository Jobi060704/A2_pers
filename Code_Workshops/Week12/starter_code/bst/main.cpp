
#include "BST.h"

#include <iostream>
#include <string>

#include "Card.h"

#define EXIT_SUCCESS    0

using std::string;
using std::cout;
using std::endl;

int main(void) {
   // BST<Card*>* bst = new BST<Card*>();

   // bst->add(new Card(RED, 7));
   // bst->add(new Card(RED, 1));
   // bst->add(new Card(BLUE, 7));
   // bst->add(new Card(BLUE, 0));
   // bst->add(new Card(RED, 0));


   BST<Card>* bst = new BST<Card>();

   bst->add(Card(RED, 7));
   bst->add(Card(RED, 1));
   bst->add(Card(BLUE, 7));
   bst->add(Card(BLUE, 0));
   bst->add(Card(RED, 0));

   // bst->add('a');
   // bst->add('b');
   // bst->add('d');
   // bst->add('f');
   // bst->add('z');
   // bst->add('c');
   // bst->add(11);

   // for (int i = 0; i != 15; ++i) {
   //    cout << "Bst contains " << i << "? " << bst->contains(i) << endl;

   // }


   std::cout << "DFS--------" << std::endl;
   bst->dfs();

   delete bst;
   cout << "Done" << endl;

   return EXIT_SUCCESS;
}
