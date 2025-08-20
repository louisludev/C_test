#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i, n, score;
    float avg=0, sum=0;

    cout<<"輸入幾筆成績?: ";
    cin>>n;

    for (i=1; i<n+1; i++) {
        cout<<"輸入第"<<i<<"比成績: ";
        cin >> score;
        sum+=score;
    }
    avg = sum/n;
    cout<<fixed<<setprecision(1);
    cout<<"您的平均分數是: "<<avg<<"分"<<endl;
    return 0;
}