#include <iostream>
using namespace std;
 
int main() {
    int r, c;
    cin >> r >> c;
    int x[r][c];
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            cin >> x[i][j];
        }
    }

    int s;
    for (int i=0;i<r;i++) {
        s = 0;
        for (int j=0;j<c;j++) {
            cout << x[i][j] << " ";
            s += x[i][j];
        }
        cout << s << endl;
    }
    int t;
    t = 0;
    s = 0;
    for (int j=0;j<c;j++) {
        s = 0;
        for (int i=0;i<r;i++) {
            s += x[i][j];
        }
        cout << s << " ";
        t += s;
    }
    cout << t << endl;
    return 0;
}
