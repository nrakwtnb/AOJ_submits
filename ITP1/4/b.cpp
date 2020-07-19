#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double r;
    double area, circum;
    cin >> r;
    area = M_PI * pow(r, 2.0);
    circum = 2.0 * M_PI * r;
    cout << fixed << setprecision(6) << area << " " << circum << endl;
    return 0;
}

