#include <iostream>
#include <string>
using namespace std;

int main() {
  int num1, num2;

  cout << "請輸入2個數字: ";
  cin >> num1 >> num2;

  if (num1 > num2) {
    cout << "num1 is lager";
  } else {
    cout << "num1 is not lager";
  }
  return 0;
}