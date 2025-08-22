#include <iostream>
using namespace std;

int main() {
  int i = 0;
  int sum = 0;

  for (i = 0; i <= 6; i += 2) {
    sum += i;
  }

  cout << sum << endl;

  return 0;
}
