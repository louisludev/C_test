#include <iostream>

using namespace std;

int main() {
  int n, i;
  cout << "type your floors: ";
  cin >> n;
  for (i = 1; i <= n; i++) {
    if (i == 4) {
      n++;
      continue;
    }
    cout << i << " ";
  }
  return 0;
}