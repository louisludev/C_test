#include <iomanip>
#include <iostream>
using namespace std;

float bmiCalculate(float h, float kg) { return kg / (h * h); }

string bmiStatus(float bmi) {
  if (bmi < 18.5) {
    return "過瘦";
  } else if (bmi >= 18.5 && bmi < 24) {
    return "適中";
  } else {
    return "過重";
  }
}

int main() {
  float h, kg, bmi;
  char choice;

  do {
    cout << "輸入身高(公尺): ";
    cin >> h;
    cout << "輸入體重(公斤): ";
    cin >> kg;
    float bmi = bmiCalculate(h, kg);
    string status = bmiStatus(bmi);
    cout << fixed << setprecision(1);
    cout << "你的BMI為: " << bmi << ", " << status << "。" << endl;
    cout << "是否繼續?(Y/N): ";
    cin >> choice;
  } while (choice == 'Y' || choice == 'y');
  cout << "下次見!" << endl;
  return 0;
}