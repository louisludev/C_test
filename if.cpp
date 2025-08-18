#include <iostream>
using namespace std;

int main() {

    bool is_good=0;
    float a = 1000000;
    if(is_good)
    {
        cout<<"你需要付: "<<a*0.8<<"元"<<endl;
    }
    else
    {
        cout<<"你需要付: "<<a*0.9<<"元"<<endl;
    }
    cout<<"祝你好運!";
    return 0;

}