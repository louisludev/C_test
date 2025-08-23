#include <iomanip>
#include <iostream>

using namespace std;

float bmiCalculate(float h, float kg) { return kg / (h * h); }

string bmiStatus(float bmi) {
  if (bmi < 18.5) {
    return "bony";
  } else if (bmi >= 18.5 && bmi < 24) {
    return "Fit";
  } else {
    return "Fat";
  }
}

int main() {
  float h, kg, bmi;
  char choice;

  do {
    cout << "Type height(m): ";
    cin >> h;
    cout << "Type Weight(kg): ";
    cin >> kg;
    float bmi = bmiCalculate(h, kg);
    string status = bmiStatus(bmi);
    cout << fixed << setprecision(1);
    cout << "BMI: " << bmi << ", " << status << "." << endl;
    cout << "Continue?(y/n): ";
    cin >> choice;
  } while (choice == 'Y' || choice == 'y');
  cout << "see you next time!" << endl;
  return 0;
}