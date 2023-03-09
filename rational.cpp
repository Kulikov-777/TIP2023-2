#include "rational.h"

int rational::gcd(int a, int b) {
  if (a % b == 0) return b;
  if (b % a == 0) return a;
  if (a > b) return gcd(a % b, b);
  return gcd(a, b % a);
}

rational::rational() {
  a = 0;
  b = 1;
}

rational::rational(int a1, int b1) {
  while (b1 == 0) {
    cout << "Enter denominator: \n";
    cin >> b1;
  }
  if (a1 * b1 <= 0) {
    a = (abs(a1) % abs(b1)) * -1;
    b = abs(b1);
  } else {
    a = abs(a1) % abs(b1);
    b = abs(b1);
  }
  int d = gcd(abs(a), abs(b));
  a /= d;
  b /= d;
}

void rational::set(int a1, int b1) {
  while (b1 == 0) {
    cout << "Enter denominator: \n";
    cin >> b1;
  }
  if (a1 * b1 <= 0) {
    a = (abs(a1) % abs(b1)) * -1;
    b = abs(b1);
  } else {
    a = abs(a1) % abs(b1);
    b = abs(b1);
  }
  int d = gcd(abs(a), abs(b));
  a /= d;
  b /= d;
}

void rational::show() {
  if (a == 0) {
    cout << "rational display:\n";
  } else {
    cout << a << "/" << b << endl;
  }
}