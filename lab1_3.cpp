#include <iostream>
using namespace std;
int main() {
    double tC;
    cout << "vedite tC: ";
    cin >> tC;
    double tF = (9.0 / 5.0) * tC + 32;
    double tK = tC + 273.15;
    cout << "tF: " << tF << endl;
    cout << "tK: " << tK << endl;  
    return 0;
}