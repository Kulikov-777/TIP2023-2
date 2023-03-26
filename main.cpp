#include <iostream>

#include "cone.h"

using namespace std;

int main() {
  Cone c1(3, 7);  // Конус с центром в начале координат с радиусом 3 и выотой 7
  Cone c2(1, 2, 3, 5, 10);  // Произвольный конус

  cout << "Cone 1: " << c1;
  cout << "Area: " << c1.area() << "\n";
  cout << "Volume: " << c1.volume() << "\n";

  cout << "Cone 2: " << c2;
  cout << "Area: " << c2.area() << "\n";
  cout << "Volume: " << c2.volume() << "\n";

  Frustum c3(5, 3, 6);

  cout << "Cone 3: " << c3;
  cout << "Area: " << c3.area() << endl;
  cout << "Volume: " << c3.volume() << endl;

  Frustum c4(6, 4, 7);

  cout << "Cone 4: " << c4;
  cout << "Area: " << c4.area() << endl;
  cout << "Volume: " << c4.volume() << endl;

  Frustum c5(6, 4, 7);

  cout << (c4.compare(c5) ? "Cones are equal" : "Cones are not equal");
  return 0;
}