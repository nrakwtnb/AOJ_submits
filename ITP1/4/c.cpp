#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    string op;
    int res;
    while (true) {
        cin >> a >> op >> b;
        if (op == "+") {
            res = a + b;
        }
        if (op == "-") {
            res = a - b;
        }
        if (op == "*") {
            res = a * b;
        }
        if (op == "/") {
            res = a / b;
        }
        if (op == "?") {
            break;
        }
        cout << res <<endl;
    }
    return 0;
}

