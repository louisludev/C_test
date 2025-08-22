#include <iostream>
using namespace std;

int main() {
  cout << "以下將列印出九九乘法表!" << "\n" << endl;
  for (int i = 1; i <= 9; i++) {
    for (int j = 1; j <= 9; j++) {
      cout << i << "x" << j << "=" << i * j << "\t";
    }
    cout << endl;
  }
  cout << "\n運算結束!" << endl;
  return 0;
}