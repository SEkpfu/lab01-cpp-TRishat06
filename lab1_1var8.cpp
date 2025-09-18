#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double c, a, b, P, S;
    cout<<"введите длины катетов: a и b"<< endl;
    cin >> a >> b;
    c=pow(a,2) + pow(b,2);
    cout<<"гипотенуза c равна"<<c<<endl;
    P=a+b+c;
    cout << "периметр P равен" << P<< endl;
    S=a*b/2;
    cout << "площадь S равна" << S << endl;
    return 0;
}