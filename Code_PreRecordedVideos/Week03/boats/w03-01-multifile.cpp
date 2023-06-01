
#include <iostream>
#include <string>

#include "Boat.h"
#include "print.h"

int main(void) {
   Boat boat("Nautical", 6.0, 33.0);
   printBoat(boat);

   boat.setName("The Black Pearl");
   printBoat(boat);

   return EXIT_SUCCESS;
}

