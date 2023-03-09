#include <iostream>

#include "figure.h"

int main() {
  setlocale(LC_ALL, "ru");
  for (int i = 0; i < 3; i++) {
    float x1, x2, x3, x4, y1, y2, y3, y4;
    cout << "Введите координаты первой вершины: ";
    cin >> x1 >> y1;
    cout << "Введите координаты второй вершины: ";
    cin >> x2 >> y2;
    cout << "Введите координаты третьей вершины: ";
    cin >> x3 >> y3;
    cout << "Введите координаты четвертой вершины: ";
    cin >> x4 >> y4;
    figure Figure(x1, x2, x3, x4, y1, y2, y3, y4);
    Figure.show();
    Figure.is_prug() ? cout << "Это прямоугольник\n"
                     : cout << "Это не прямоугольник\n";
    Figure.is_square() ? cout << "Это квадрат\n" : cout << "Это не квадрат\n";
    Figure.is_romb() ? cout << "Это ромб\n" : cout << "Это не ромб\n";
    Figure.is_in_circle()
        ? cout << "Можно вписать четырёхугольник в окружность\n"
        : cout << "Нельзя вписать четырёхугольник в окружность\n";
    Figure.is_out_circle()
        ? cout << "Можно описать четырёхугольник около окружности\n"
        : cout << "Нельзя описать четырёхугольник около окружности\n";
    cout << endl << "\n\n";
  }
}