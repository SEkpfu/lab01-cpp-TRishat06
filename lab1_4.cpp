#include <iostream>
using namespace std;
 
int main() {
    const double PI = 3.14159;
    double radius;
    cout << "radius: ";
    cin >> radius;
    double volume = (4.0 / 3.0) * PI * radius * radius * radius;
    cout << "obiem= " << volume << endl;
    return 0;
}