#include "Eq2.h"

#include <cmath>
#include <iostream>

using namespace std;

eq2::eq2(double a1, double b1, double c1) {
  a = a1;
  b = b1;
  c = c1;
  D = 0;
}

void eq2::set(double a1, double b1, double c1) {
  a = a1;
  b = b1;
  c = c1;
}

double eq2::find_Y(double x1) { return a * pow(x1, 2) + b * x1 + c; }

double eq2::find_X() {
  D = pow(b, 2) - 4 * a * c;
  if (D < 0) {
    cout << "No solutions" << endl;
    return 0;
  } else if (D == 0) {
    double x = -b / (2 * a);
    cout << "1 solution: " << x << endl;
    return x;
  } else {
    double x1 = (-b + sqrt(D)) / (2 * a), x2 = (-b - sqrt(D)) / (2 * a);
    cout << "2 solutions, the least displayed: ";
    if (x1 > x2) {
      cout << x1 << endl;
      return x1;
    } else {
      cout << x2 << endl;
      return x2;
    }
  }
}

eq2 eq2::operator+(eq2 &other) {
  eq2 temp(0.0, 0.0, 0.0);
  temp.a = this->a + other.a;
  temp.b = this->b + other.b;
  temp.c = this->c + other.c;
  return temp;
}