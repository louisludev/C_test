#include <iostream>
using namespace std;

int main() {

    int i=0, n=0, sum=0;
    cout <<"請輸入一個數字: ";
    cin >> n;
    for (i=1; i<n+1; i++) {
        sum+=i;
    }
    cout << "1+...+" << n << "= "<< sum;
    return 0;
}