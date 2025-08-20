#include <iostream>
using namespace std;

int main() {
  int i = 0;
  int sum = 0;

  for (i = 0; i < 101; i++) {
    sum += i;
  }

  cout << sum << endl;

  return 0;
}
