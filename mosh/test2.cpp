#include <iostream>

float calculateArea(float r, float pi) { return r * r * pi; }

int main() {
  const float pi = 3.14;
  float r = 0;

  std::cout << "Type r(cm): ";
  std::cin >> r;

  float area = calculateArea(r, pi);

  std::cout << "Circle area: " << area;
  return 0;
}