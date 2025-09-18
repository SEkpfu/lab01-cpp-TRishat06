#include <iostream>
using namespace std;
 
int main() {
    double num1, num2;
    cout << "1 chislo: ";
    cin >> num1;
    cout << "2 chislo: ";
    cin >> num2;
    cout << "sum: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << "raz: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << "proizv: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    return 0;
}