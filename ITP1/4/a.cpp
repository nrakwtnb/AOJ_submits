#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b;
    int d, r;
    double f;
    cin >> a >> b;
    d = a / b;
    r = a % b;
    f = double(a) / double(b);
    cout << fixed << setprecision(5) << d << " " << r << " " << f << endl;
    return 0;
}

