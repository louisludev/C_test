#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    float height;
    float kg;
    float bmi;

    cout << "請輸入你的身高(cm): " ;
    cin >> height;
    cout << "請輸入你的體重(kg): " ;
    cin >> kg;
    bmi = kg/((height/100)*(height/100));
    cout << fixed << setprecision(1);

    if (bmi<18.5) {
        cout << "過瘦，你的BMI為: " << bmi << endl;
    }
    else if (bmi>=18.5 && bmi<=24) {
        cout << "正常，你的BMI為: " << bmi << endl;
    }
    else {
        cout << "你也太胖了吧! 你的BMI為: " << bmi << endl;
    }

    return 0;
}