#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double cp, b, rp;

    cout << "Enter cost per device: ";
    cin >> cp;

    cout << "Enter base cost: ";
    cin >> b;

    cout << "Enter revenue per device: ";
    cin >> rp;

    double N = b / (rp - cp);
    int devices = ceil(N);

    cout << "Minimum number of devices to break even: " << devices << endl;

    return 0;
}
