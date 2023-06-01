
#include <iostream>
#include <string>

#include "linkedlist/LinkedList.h"
#include "linkedlist/LinkedListSize.h"

void foo(int x);
void foo(double x);

void tempfunction(LinkedList* list);

int main(void) {

   // int a = -8;
   // float b = 6.8;

   // float f = 1.9;

   // auto x = 1;
   // std::cout << x / 2 << std::endl;

   // foo(7);
   // foo(x);
   // foo(b);
   // foo(1.0f);
   // foo(f);
   // foo('a');

   // LinkedList* list;
   // LinkedListSize* llsize = new LinkedListSize();

   // list = llsize;
   // std::cout << list->size() << std::endl;

   // list = nullptr;
   // list = static_cast<LinkedList*>(llsize);
   // std::cout << list->size() << std::endl;

   // list = nullptr;
   // list = dynamic_cast<LinkedList*>(llsize);
   // std::cout << list->size() << std::endl;


   // LinkedListSize* list = new LinkedListSize();
   // LinkedList* list = new LinkedList();

   // tempfunction(list);

      std::cout << "Hello, ф or \u0444!\n";


   return EXIT_SUCCESS;
}

void tempfunction(LinkedList* list){
   LinkedListSize* llsize = dynamic_cast<LinkedListSize*>(list);

   if(llsize != nullptr){
      std::cout << "****: "<< llsize->size() << std::endl;
   }else{
      std::cout << "Nullptr " << std::endl;
   }

}


void foo(int x) {
   std::cout << "Int foo" << std::endl;
}

void foo(double x) {
   std::cout << "Double foo" << std::endl;
}

