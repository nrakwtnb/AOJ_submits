#include <iostream>
using namespace std;

int main() {
    int n, x, v_min, v_max;
    long long sum;
    // int sum;
    cin >> n;
    cin >> x;
    v_min = x;
    v_max = x;
    sum = x;
    for (int i=1;i<n;i++) {
        cin >> x;
        v_min = min(v_min, x);
        v_max = max(v_max, x);
        sum += x;
    }
    cout << v_min << " " << v_max << " " << sum << endl;
    return 0;
}

