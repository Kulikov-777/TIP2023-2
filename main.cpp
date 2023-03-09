#include "eq2.h"

int main() {
  double a, b, c, x;

  cout << "1st coeff: \n";
  cin >> a >> b >> c;

  eq2 test1(a, b, c);
  cout << "1st sol\n";
  test1.find_X();

  cout << "enter x: \n";
  cin >> x;
  cout << test1.find_Y(x) << endl;

  cout << "2nd coeff: \n";
  cin >> a >> b >> c;

  eq2 test2(a, b, c);
  cout << "2nd sol: \n";
  test2.find_X();

  cout << "enter x: \n";
  cin >> x;
  cout << test2.find_Y(x) << endl;

  cout << "sum 1st and 2nd coeff\n";
  eq2 cook = (test2 + test1);

  cout << "3rd sol\n";
  cook.find_X();

  cout << "enter x: \n";
  cin >> x;
  cout << cook.find_Y(x) << endl;
  return 0;
}