#include <iostream>
using namespace std;
 
int main() {
    double a, b, c;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    double V = a * b * c;
    double S = 2 * (a * b + b * c + a * c);
    cout << "V=" << V << endl;
    cout << "S=" << S << endl;
    return 0;
}