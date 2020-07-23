#include <iostream>
using namespace std;
 
int main() {
    int C[4][3][10];
    for (int i=0;i<4;i++) {
        for (int j=0;j<3;j++) {
            for (int k=0;k<10;k++) {
                C[i][j][k] = 0;
            }
        }
    }
    int n;
    cin >> n;
    int f, b, r,v;
    for (int i=0;i<n;i++) {
        cin >> b >> f >> r >> v;
        C[b-1][f-1][r-1] += v;
    }
    for (int i=0;i<4;i++) {
        if (i>0) {
            cout << "####################" << endl;
        }
        for (int j=0;j<3;j++) {
            for (int k=0;k<10;k++) {
                cout << " " << C[i][j][k];
            }
            cout << endl;
        }
    }
    return 0;
}
