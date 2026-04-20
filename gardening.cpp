#include <iostream>
using namespace std;

int main() {

    double n1, n2, n3;
    double p1, p2, p3;
    double k1, k2, k3;

    // Input
    cout << "Enter n1 n2 n3: ";
    cin >> n1 >> n2 >> n3;

    cout << "Enter p1 p2 p3: ";
    cin >> p1 >> p2 >> p3;

    cout << "Enter k1 k2 k3: ";
    cin >> k1 >> k2 >> k3;

    double M1, M2, M3;

    // Break equations into parts (makes it easier and cleaner)
    double A = (n2 - n3 + p3 - p2);
    double B = (n1 - n3 + p3 - p1);
    double C = (n3 - n2 + k2 - k3);

    // Solve for M1
    double numerator = (k3 - n3 + n1 - k1) + C * (A / B);
    double denominator = (k3 - n3) + C * (A / (p3 - n3));

    M1 = numerator / denominator;

    // Solve for M2
    M2 = A / ((p3 - n3) - M1 * B);

    // Solve for M3
    M3 = 1 - M1 - M2;

    // Output mixing proportions
    cout << "M1 = " << M1 << endl;
    cout << "M2 = " << M2 << endl;
    cout << "M3 = " << M3 << endl;

    // Check N, P, K values
    double nitrogen = M1 * n1 + M2 * n2 + M3 * n3;
    double phosphorus = M1 * p1 + M2 * p2 + M3 * p3;
    double potassium = M1 * k1 + M2 * k2 + M3 * k3;

    cout << "Nitrogen = " << nitrogen << endl;
    cout << "Phosphorus = " << phosphorus << endl;
    cout << "Potassium = " << potassium << endl;

    return 0;
}

