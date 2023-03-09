#include <iostream>

#include "Triangle.h"

int main() {
  double a, b, c;

  Triangle triangle;
  int i = 0;
  while (i < 3) {
    cout << "Enter three sides:" << endl;
    cin >> a >> b >> c;

    triangle.set(a, b, c);

    if (triangle.exist_tr()) {
      triangle.show();
      cout << "Perimiter = " << triangle.perimetr() << endl;
      cout << "Surface area = " << triangle.square() << endl;
    } else {
      cout << "Does not exist, try again"
           << "\n\n"
           << endl;
    }
    i++;
  }
  return 0;
}