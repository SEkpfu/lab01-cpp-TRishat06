#include <iostream>
using namespace std;
int main(){
    double x, y;
    cout<<"x=";
    cin>>x;
    double x2=x*x;
    double x4=x2*x2;
    double x7=x4*x*x2;
    double x11=x7*x4;
    y=x11-x7+x2-2;
    cout<<"y="<<y;
    return 0;
}
