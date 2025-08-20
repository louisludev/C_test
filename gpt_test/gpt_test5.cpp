#include <iostream>
#include <iomanip>
using namespace std;

float calculateBMI(float height,float weight) {
    float heightM = height/100;
    float bmi = weight/(heightM*heightM);
    return bmi;
}

string bmiStatus(float bmi) {

        if (bmi < 18.5) {
            return "過瘦";
        }
        else if (bmi <= 24) {
            return "適中";
        } 
        else {
            return "過重";
        }
}

int main() {
    int n, i;
    cout << "請輸入要計算 BMI 的人數: ";
    cin >> n;

    for (i=1; i<n+1; i++) {
        float height, weight;
        cout << "\n--- 第 " << i << " 個人 ---" << endl;
        cout << "請輸入身高(cm): ";
        cin >> height;
        cout << "請輸入體重(kg): ";
        cin >> weight;

        float(bmi) = calculateBMI(height, weight); // 呼叫函式
        string status = bmiStatus(bmi);
        cout << fixed << setprecision(1);
        cout << "BMI = " << bmi <<"," << status << "。" << endl;

    }

    return 0;
}