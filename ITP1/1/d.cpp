#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x, h, m, s;
    cin >> x;
    h = x / 3600;
    x = x - 3600 * h;
    m = x / 60;
    x = x - 60 * m;
    s = x;
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}
