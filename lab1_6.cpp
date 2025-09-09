#define _USE_MATH_DEFINES 
#include <iostream>
#include <cmath>  
using namespace std;
int main() {
    double radius, height;
    cout << "radius= ";
    cin >> radius;
    cout << "height= ";
    cin >> height;
    double volume = M_PI * radius * radius * height;
    double surface_area = 2 * M_PI * radius * (radius + height);
    cout << "V= " << volume << endl;
    cout << "S= " << surface_area << endl;
    return 0;
}
