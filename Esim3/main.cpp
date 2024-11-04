#include "myfunctions.h"
#include <iostream>

using namespace std;

int main() {
  int num;
  int result;
  cout << "lasketaan kertoma!" << endl;
  cout << "Anna positiivinen kokonaisluku" << endl;
  cin >> num;
  result = factorial(num);
  if (result == -1) {
    cout << "Kertoma ei voi laskea negatiiviselle luvulle" << endl;
  } else {
    cout << "Luvun " << num << " kertomoma=" << result << endl;
  }

  return 0;
}
