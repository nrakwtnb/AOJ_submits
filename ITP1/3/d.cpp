#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int count = 0;
    for (int d=a;d<=b;d++) {
        if (c%d == 0) {
            count++;
        }
    }
    cout << count <<endl;
    return 0;
}


