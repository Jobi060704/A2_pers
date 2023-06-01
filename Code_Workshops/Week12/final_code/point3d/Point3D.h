
#ifndef COSC1076_POINT3D_H
#define COSC1076_POINT3D_H

#include <iostream>
#include <map>

class Point3D {
public:
   Point3D();
   Point3D(const Point3D& other);
   Point3D(Point3D&& other);
   ~Point3D();

   double get(int col) const;
   void set(int col, double value);

   void print() const;

   bool operator==(const Point3D& other) const;
   bool operator!=(const Point3D& other) const;
   // bool operator<(const Point3D& other) const;
   double& operator[](const int index);
   double& operator[](const char dim);

   Point3D& operator+=(const Point3D& other);
   Point3D& operator+=(int value);
   Point3D operator+(const Point3D& other) const;

   Point3D& operator=(const Point3D& other);
   Point3D& operator=(const Point3D&& other);

   // Increment operator
   Point3D& operator++();
   Point3D operator++(int);

   // Must be a non-member function - ie NOT method
   // std::ostream& operator<<(std::ostream& os);

private:
   double points[3];
};

std::ostream& operator<<(std::ostream& os, Point3D& point);

#endif // COSC1076_POINT3D_H
