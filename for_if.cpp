#include <iostream>
using namespace std;

int main() {
  int n, count = 0;
  cout << "type a value: ";
  cin >> n;
  for (int i = 1; i <= n; i++) {
    if (i % 3 == 0) {
      count += 1;
      cout << i << endl;
    }
  }
  cout << count;
  return 0;
}