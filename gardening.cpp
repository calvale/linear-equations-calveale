#include <iostream>
using namespace std;

int main() {
    double n1, p1, k1;
    double n2, p2, k2;
    double n3, p3, k3;

    cout << "Enter n1: ";
    cin >> n1;
    cout << "Enter p1: ";
    cin >> p1;
    cout << "Enter k1: ";
    cin >> k1;

    cout << "Enter n2: ";
    cin >> n2;
    cout << "Enter p2: ";
    cin >> p2;
    cout << "Enter k2: ";
    cin >> k2;

    cout << "Enter n3: ";
    cin >> n3;
    cout << "Enter p3: ";
    cin >> p3;
    cout << "Enter k3: ";
    cin >> k3;

    double M1, M2, M3;
    
    double A = (n2 - n3 + p3 - p2);
    double B = (n1 - n3 + p3 - p1);
    double C = (n3 - n2 + k2 - k3);

    double numerator = (k3 - n3 + n1 - k1) + C * (A / B);
    double denominator = (k3 - n3) + C * (A / (p3 - n3));

    double part1 = (n2 - n3 + p3 - p2);
    double part2 = (n1 - n3 + p3 - p1);
    double part3 = (n3 - n2 + k2 - k3);

    double top = (k3 - n3 + n1 - k1) + part3 * ((n2 - n3 + p3 - p2) / (n1 - n3 + p3 - p1));
    double bottom = (k3 - n3) + part3 * ((n2 - n3 + p3 - p2) / (p3 - n3));
<<<<<<< HEAD
=======

>>>>>>> bae0e2e (added AI files)

    M1 = top / bottom;

    M2 = A / ((p3 - n3) - M1 * B);
<<<<<<< HEAD
    
    M2 = (p3 - n3 - M1 * (n1 - n3 + p3 - p1)) / (n2 - n3 + p3 - p2);
=======

    M2 = (p3 - n3 - M1 * (n1 - n3 + p3 - p1)) / (n2 - n3 + p3 - p2);

>>>>>>> bae0e2e (added AI files)

    M3 = 1 - M1 - M2;

    cout << "M1 = " << M1 << endl;
    cout << "M2 = " << M2 << endl;
    cout << "M3 = " << M3 << endl;

    double nitrogen = M1 * n1 + M2 * n2 + M3 * n3;
    double phosphorus = M1 * p1 + M2 * p2 + M3 * p3;
    double potassium = M1 * k1 + M2 * k2 + M3 * k3;

    cout << "Nitrogen = " << nitrogen << endl;
    cout << "Phosphorus = " << phosphorus << endl;
    cout << "Potassium = " << potassium << endl;

    return 0;
}

