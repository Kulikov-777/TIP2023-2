#include <iostream>

#include "circle.h"

using namespace std;

int main() {
  setlocale(LC_ALL, "ru");
  float r[3], x[3], y[3], tr[3]{3, 4, 5};
  for (int i = 0; i < 3; i++) {
    cout << "Введите радиус и координаты центра для " << i + 1
         << "-й оркужности" << endl;
    cout << "Радиус: ";
    cin >> r[i];
    cout << "\nКоордината центра x: ";
    cin >> x[i];
    cout << "\nКоордината центра y: ";
    cin >> y[i];
    cout << "\n================================================" << endl;
  }
  circle Circle1(r[0], x[0], y[0]);
  circle Circle2(r[1], x[1], y[1]);
  circle Circle3(r[2], x[2], y[2]);
  cout << "Площади:\t" << Circle1.square() << "\t" << Circle2.square() << "\t"
       << Circle3.square() << endl;

  Circle1.triangle_around(tr[0], tr[1], tr[2])
      ? cout << "Можно описать треугольник около 1 окружности\n"
      : cout << "Нельзя описать треугольник около 1 окружности\n";
  Circle1.triangle_in(tr[0], tr[1], tr[2])
      ? cout << "Можно вписать треугольник в 1 окружность\n"
      : cout << "Нельзя вписать треугольник в 1 окружность\n";
  Circle2.triangle_around(tr[0], tr[1], tr[2])
      ? cout << "Можно описать треугольник около 2 окружности\n"
      : cout << "Нельзя описать треугольник около 2 окружности\n";
  Circle2.triangle_in(tr[0], tr[1], tr[2])
      ? cout << "Можно вписать треугольник в 2 окружность\n"
      : cout << "Нельзя вписать треугольник в 2 окружность\n";
  Circle3.triangle_around(tr[0], tr[1], tr[2])
      ? cout << "Можно описать треугольник около 3 окружности\n"
      : cout << "Нельзя описать треугольник около 3 окружности\n";
  Circle3.triangle_in(tr[0], tr[1], tr[2])
      ? cout << "Можно вписать треугольник в 3 окружность\n"
      : cout << "Нельзя вписать треугольник в 3 окружность\n";

  Circle1.check_circle(r[1], x[1], y[1])
      ? cout << "1 и 2 оркужности пересекаются\n"
      : cout << "1 и 2 оркужности не пересекаются\n";
  Circle1.check_circle(r[2], x[2], y[2])
      ? cout << "1 и 3 оркужности пересекаются\n"
      : cout << "1 и 3 оркужности не пересекаются\n";
  Circle2.check_circle(r[2], x[2], y[2])
      ? cout << "2 и 3 оркужности пересекаются\n"
      : cout << "2 и 3 оркужности не пересекаются\n";
  return 0;
}