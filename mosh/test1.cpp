#include <iostream>

int main() {
  int a = 1, b = 2;
  int c = 0;
  std::cout << a << std::endl;
  c = a, a = b, b = c;
  std::cout << a;
}