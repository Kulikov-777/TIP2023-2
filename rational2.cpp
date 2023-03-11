#include "rational2.h"

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
    cout << "Enter denominator:\n";
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
  if (a == 0 || a == b) {
    cout << "rational display: \n";
  } else {
    cout << a << "/" << b << endl;
  }
}

rational rational::operator+(const rational& other) {
  rational temp(other.a, other.b);
  temp.set(a * other.b + b * other.a, b * other.b);
  return temp;
}

rational& rational::operator++() {
  a++;
  return *this;
}

rational& rational::operator++(const int) {
  rational temp = *this;
  a++;
  return temp;
}

bool rational::operator==(const rational& other) {
  return this->a == other.a && this->b == other.b;
}

bool rational::operator>(const rational& other) {
  return this->a * other.b > other.a * this->b;
}

bool rational::operator<(const rational& other) {
  return this->a * other.b < other.b * this->b;
}

void rational::operator=(const rational& other) {
  this->a = other.a;
  this->b = other.b;
}

rational operator-(const rational& other1, const rational& other2) {
  rational temp(other1.a, other1.b);
  temp.set(other1.a * other2.b - other1.b * other2.a, other2.b * other1.b);
  return temp;
}