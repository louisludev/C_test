#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    float h, kg, bmi;

    while (1) {
        
        cout<<"輸入身高(公尺): ";
        cin>>h;

        if (h==0) {
            cout<<"下次見!"<<endl;
            break;
        }

        cout<<"輸入體重(公斤): ";
        cin>>kg;

        if (kg==0) {
            cout<<"下次見!"<<endl;
            break;
        }

        bmi = kg/(h*h);
        cout << fixed << setprecision(1);

        if (bmi<18.5) {
            cout<<"太瘦了，你的BMI為: "<<bmi<<endl;
        }
        else if (bmi>=18.5 && bmi<24) {
            cout<<"適中，你的BMI為: "<<bmi<<endl;
        }
        else {
            cout<<"太胖了!你的BMI竟然是: "<<bmi<<"\n"<<"去反省一下吧!!"<<endl;
        }
    }
    return 0;
    }