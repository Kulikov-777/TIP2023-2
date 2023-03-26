#include <ctime>
#include <iostream>

#include "ocean.h"

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");

  srand(time(NULL));

  Ocean f1, f2, f3, f4;
  f1.addSea();
  f1.addSea();
  f1.seas[0].addGulf();
  f1.seas[0].addGulf();
  f1.seas[1].addGulf();
  f1.seas[1].addGulf();
  f1.seas[1].addGulf();
  f3.addSea();

  cout << f1 << "\n";
  cout << f2 << "\n";
  cout << f3 << "\n";

  f4.addSea();
  f4.seas[0].addGulf();

  cout << "\nВведите данные океана (Название, глубина, размер):";
  cin >> f4;
  cout << "Введите данные моря (Название, глубина, размер):";
  cin >> f4.seas[0];
  cout << "Введите данные залива (Название, глубина, размер):";
  cin >> f4.seas[0].Gulfs[0];

  cout << "\n";

  cout << f4;

  cout << "\n";

  return 0;
}