#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "num1=";
    cin >> num1;
    cout << "num2=";
    cin >> num2;
    int last_num1 = num1 % 10;
    int last_num2 = num2 % 10;
    int sum = last_num1 + last_num2;
    cout << "last_num1=" << last_num1 << endl;
    cout << "last_num2= " << last_num2 << endl;
    cout << "sum=" << sum << endl;
    return 0;
}
