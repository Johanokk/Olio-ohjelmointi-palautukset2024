#include <iostream>
using namespace std;
#include <iomanip>

void calcSum(int a, int b) {
  int summa = a + b;
  std::cout << "Lukujen summa on: " << summa << std::endl;
}

void calcDiv(int a, int b) {
  if (b != 0) {
    double osamaara = static_cast<double>(a) / b;
    std::cout << "Lukujen osamaara on: " << std::fixed << std::setprecision(2)
              << osamaara << std::endl;
  } else {
    std::cout << "Nollalla ei voi jakaa!" << std::endl;
  }
}

int retSum(int a, int b) { return a + b; }

float retDiv(int a, int b) {
  if (b != 0) {
    return static_cast<float>(a) / b;
  } else {
    std::cout << "Nollalla ei voi jakaa!" << std::endl;
    return 0.0f;
  }
}

int main() {
  int a, b;

  std::cout << "Anna ensimmainen kokonaisluku (a): ";
  std::cin >> a;
  std::cout << "Anna toinen kokonaisluku (b): ";
  std::cin >> b;

  calcSum(a, b);
  calcDiv(a, b);

  int sum = retSum(a, b);
  float div = retDiv(a, b);

  std::cout << "retSum-funktion palauttama summa on: " << sum << std::endl;
  std::cout << "retDiv-funktion palauttama osamaara on: " << std::fixed
            << std::setprecision(2) << div << std::endl;

  return 0;
}
