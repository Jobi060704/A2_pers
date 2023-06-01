
#include "Point3D.h"

#include <exception>
#include <iostream>
#include <memory>

#define N_DIMS    3

Point3D::Point3D() {
   std::cout << "\t** Point3D constructor" << std::endl;
}

Point3D::Point3D(const Point3D& other) {
   std::cout << "\t** Point3D copy constructor" << std::endl;
}

Point3D::Point3D(Point3D&& other) {
   std::cout << "\t** Point3D move constructor" << std::endl;

}

Point3D::~Point3D() {
   std::cout << "\t** Point3D deconstructor" << std::endl;
}

// double Point3D::get(int col) const {
// }

// void Point3D::set(int col, double value) {
// }

void Point3D::print() const {
   for (int c = 0; c != N_DIMS; ++c) {
      std::cout << points[c] << " ";
   }
   std::cout << std::endl;
}

// std::ostream& operator<<(std::ostream& os, Point3D& points) {
// }

// bool Point3D::operator==(const Point3D& other) const {
// }

// bool Point3D::operator<(const Point3D& other) const {
// }

// double& Point3D::operator[](const int index) {
// }

// double& Point3D::operator[](const char dim) {
// }

// Point3D& Point3D::operator+=(const Point3D& other) {
// }

// Point3D& Point3D::operator+=(int value) {
// }

// Point3D Point3D::operator+(const Point3D& other) const {
// }

// Point3D& Point3D::operator=(const Point3D& other) {
// }

// Point3D& Point3D::operator=(const Point3D&& other) {
// }

// Point3D& Point3D::operator++() {
// }

// Point3D Point3D::operator++(int) {
// }
