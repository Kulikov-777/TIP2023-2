#include "Triangle.h"

#include <cmath>

bool Triangle::exist_tr() {
  return ((a < b + c) && (b < a + c) && (c < a + b));
}

void Triangle::set(double a1, double b1, double c1) {
  a = a1;
  b = b1;
  c = c1;
}

void Triangle::show() {
  cout << "1 side: " << a << "\n2 side: " << b << "\n3 side: " << c << endl;
}

double Triangle::perimetr() { return a + b + c; }

double Triangle::square() {
  double p = (a + b + c) / 2;
  return sqrt(p * (p - a) * (p - b) * (p - c));
}