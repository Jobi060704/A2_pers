
#include <exception>
#include <iostream>

#include "Point3D.h"

void compare(Point3D& point1, Point3D& point2);

int main(void) {
   Point3D point1;
   Point3D point2;
   Point3D point3;

   point1.print();
   point2.print();
   point3.print();
   // compare(point1, point2);

   // std::cout << "point1.get(1): " << point1.get(1) << std::endl;
   // std::cout << "point1[1]: " << point1[1] << std::endl;
   // std::cout << "point1.set(1, 7);" << std::endl;
   // point1.set(1, 7);
   // point1.print();
   // std::cout << "point2[1] = -5;" << std::endl;
   // point2[1] = -5;
   // point2.print();
   // compare(point1, point2);

   // std::cout << "Adding tests" << std::endl;
   // point2 += point1;
   // point1.print();
   // point2.print();
   // compare(point1, point2);

   // point2 += 1;
   // point2.print();
   // point3 = point1 + point2;
   // point1.print();
   // point2.print();
   // point3.print();

   // point3 = Point3D();
   // point2 = point1 + point2;
   // point1.print();
   // point2.print();
   // point3.print();

   // // Inc/Dec
   // std::cout << "Operator ++" << std::endl;
   // ++point4;
   // point4.print();
   // Point3D point5;
   // Point3D point6;
   // point5 = ++point4;
   // point6 = point4++;
   // std::cout << point4 << std::endl;
   // std::cout << point5 << std::endl;
   // std::cout << point6 << std::endl;


   // // Comparison 
   // std::cout << "Comparison operator" << std::endl;
   // point1[0] = point2[0];
   // std::cout << point1 << std::endl;
   // std::cout << point2 << std::endl;
   // bool less = point1 < point2;
   // bool greater = !(point1 < point2) && !(point1 == point2);
   // std::cout << "less: " << less << std::endl;
   // std::cout << "greater: " << greater << std::endl;
   // less = point2 < point1;
   // greater = !(point2 < point1) && !(point2 == point1);
   // std::cout << "less: " << less << std::endl;
   // std::cout << "greater: " << greater << std::endl;

   // // Move operators
   // std::cout << "Move Operators" << std::endl;
   // std::cout << point1 << std::endl;
   // std::cout << point2 << std::endl;
   // std::cout << point3 << std::endl;
   // point1 = point3;
   // std::cout << point1 << std::endl;
   // point1 = std::move(point2);
   // std::cout << point1 << std::endl;

   // // Dimension characters
   // try {
   //    std::cout << "Character Operators" << std::endl;
   //    std::cout << point1 << std::endl;
   //    point1['x'] = 42;
   //    point1['y'] = 43;
   //    point1['z'] = 44;
   //    std::cout << point1 << std::endl;

   //    point1['i'] = -42;
   //    point1['j'] = -43;
   //    point1['k'] = -44;
   //    std::cout << point1 << std::endl;

   //    point1['!'] = 44;
   // } catch (std::exception& e) {
   //    std::cout << "*** caught: " << e.what() << std::endl;
   // }


   std::cout << "Done" << std::endl;
   return EXIT_SUCCESS;
}

void compare(Point3D& point1, Point3D& point2) {
   // if (point1 == point2) {
   //    std::cout << "point1 == point2" << std::endl;
   // } else {
   //    std::cout << "point1 != point2" << std::endl;
   // }

   // if (point1 != point2) {
   //    std::cout << "point1 != point2" << std::endl;
   // } else {
   //    std::cout << "point1 == point2" << std::endl;
   // }
}