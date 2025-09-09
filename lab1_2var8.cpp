#include <iostream>
using namespace std;
int main(){
    int a, c, b;
    cout<<"a= ";
    cin>>a;
    c=a/100;
    b=a-c*100;
    b=b*10;
    b=b+c;
    cout<<"b= "<<b;
    return 0;
}