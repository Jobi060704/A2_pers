
#include "Point3D.h"

#include <exception>
#include <iostream>
#include <memory>

#define N_DIMS    3
#define X 0
#define Y 1
#define Z 2

Point3D::Point3D() {
   std::cout << "\t** Point3D constructor" << std::endl;
   points[X] = 0;
   points[Y] = 0;
   points[Z] = 0;
}

Point3D::Point3D(const Point3D& other) {
   std::cout << "\t** Point3D copy constructor" << std::endl;
   points[X] = other.points[X];
   points[Y] = other.points[Y];
   points[Z] = other.points[Z];
}

Point3D::Point3D(Point3D&& other) {
   std::cout << "\t** Point3D move constructor" << std::endl;

   points[X] = other.points[X];
   points[Y] = other.points[Y];
   points[Z] = other.points[Z];

}

Point3D::~Point3D() {
   std::cout << "\t** Point3D deconstructor" << std::endl;
}

double Point3D::get(int col) const {
   return points[col];
}

void Point3D::set(int col, double value) {
   points[col] = value;
}

void Point3D::print() const {
   for (int c = 0; c != N_DIMS; ++c) {
      std::cout << points[c] << " ";
   }
   std::cout << std::endl;
}

std::ostream& operator<<(std::ostream& os, Point3D& points) {
   for (int c = 0; c != N_DIMS; ++c) {
      os << points[c] << " ";
   }
   return os;
}

bool Point3D::operator==(const Point3D& other) const {
   return   points[X] == other.points[X] &&
               points[Y] == other.points[Y] && 
               points[Z] == other.points[Z];

}

bool Point3D::operator!=(const Point3D& other) const {
   // return  !(*this == other);
   return !(this->operator==(other));
}

// bool Point3D::operator<(const Point3D& other) const {
// }

double& Point3D::operator[](const int index) {
   return points[index];
}

double& Point3D::operator[](const char dim) {

   int index = X;
   if(dim == 'x'){
      index = X;
   }else if (dim == 'y'){
      index = Y;
   }else if(dim == 'z'){
      index = Z;
   }else{
      throw std::runtime_error("Cannot find index");
   }

   return points[index];


}

Point3D& Point3D::operator+=(const Point3D& other) {
   points[X] += other.points[X];
   points[Y] += other.points[Y];
   points[Z] += other.points[Z];

   return *this;
}

Point3D& Point3D::operator+=(int value) {
   points[X] += value;
   points[Y] += value;
   points[Z] += value;

   return *this;
}

Point3D Point3D::operator+(const Point3D& other) const {
   Point3D p;
   p[X] = points[X] + other.points[X];
   p[Y] = points[Y] + other.points[Y];
   p[Z] = points[Z] + other.points[Z];

   return p;
}

Point3D& Point3D::operator=(const Point3D& other) {
   points[X] = other.points[X];
   points[Y] = other.points[Y];
   points[Z] = other.points[Z];

   return *this;
}

Point3D& Point3D::operator=(const Point3D&& other) {
   points[X] = other.points[X];
   points[Y] = other.points[Y];
   points[Z] = other.points[Z];

   return *this;
}

Point3D& Point3D::operator++() {
   points[X] += 1;
   points[Y] += 1;
   points[Z] += 1;

   return *this;
}

Point3D Point3D::operator++(int) {
   Point3D copy(*this);
   copy.points[X] += 1; 
   copy.points[Y] += 1; 
   copy.points[Z] += 1; 

   return copy;
}
