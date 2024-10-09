#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "uk_UA.UTF-8");
    cout<<setprecision(2)<<fixed;
    double a, x, y=0;
    cout<<"Введіть число a: "<<endl;
    cin>>a;
    cout<<"Введіть число x: "<<endl;
    cin>>x;
    if ( x == a) {
        cout<<x<<" дорівнює "<<a<<endl;
        y = exp(x - a) * sin(x);
        cout<<"Y="<<y;
    }
    else if (x > a && x < pow(a, 2)) {
        cout<<x<<" більше за "<<a<<" та менше "<<pow(a, 2)<<endl;
        y = pow(x - a, 2) * pow(cos(x), 2);
        cout<<"Y="<<y;
    }
    
    return 0;
}