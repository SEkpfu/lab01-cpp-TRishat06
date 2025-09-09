#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "N=";
    cin >> N;
    int hours = N / 3600;
    int minutes = (N % 3600) / 60;
    int seconds = N % 60;
    cout << "hours=" << hours << endl;
    cout << "minutes=" << minutes << endl;
    cout << "seconds=" << seconds << endl;
    return 0;
}
