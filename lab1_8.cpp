#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "number=";
    cin >> number;   
    int last_digit = number % 10;
    int first_digit = number / 1000;
    cout << "first_digit=" << first_digit << endl;
    cout << "last_digit=" << last_digit << endl;
    return 0;
}