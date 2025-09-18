#include <iostream>
using namespace std;
int main(){
    int a, b, c, d, f;
    cout<<"a, b, c:";
    cin>>a>>b>>c;
    d=((a+b+c)%2==0)?(a+b+c):max(b,c);
    f=((a+b+c)%2==0)?(a*b*c):max(b,c);
    cout<<d<<endl<<f;
    return 0;
}