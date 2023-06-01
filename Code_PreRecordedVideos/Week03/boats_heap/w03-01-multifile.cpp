
#include <iostream>
#include <string>

#include "Boat.h"
#include "print.h"



int main(void) {

   Boat boat("Nautical", 6.0, 33.0);
   printBoat(boat);

   boat.setName("The Black Pearl");
   printBoat(boat);

   // Boat* boat = new Boat("Nautical", 6.0, 33.0);
   // printBoat(boat);

   // // (*boat).setName("The Black Pearl");
   // boat->setName("The Black Pearl");
   // printBoat(boat);

   // std::cout << "before delete" << std::endl;
   // delete boat;
   // std::cout << "after delete" << std::endl;

   return EXIT_SUCCESS;
}
