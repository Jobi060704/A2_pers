#include "???"

Example::Example(double value) {
   this->ptrValue = new double(value);
}

void Example::setValue(double value) {
   this->ptrValue = value;
}

double Example::getValue() {
   return this->ptrValue;
}