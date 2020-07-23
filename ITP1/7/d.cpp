#include <iostream>
using namespace std;
 
int main() {
    int n, m, l;
    cin >> n >> m >> l;
    int A[n][m];
    int B[m][l];
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin >> A[i][j];
        }
    }
    for (int j=0;j<m;j++) {
        for (int k=0;k<l;k++) {
            cin >> B[j][k];
        }
    }

    long long int C[n][l];
    for (int i=0;i<n;i++) {
        for (int k=0;k<l;k++) {
            C[i][k] = 0;
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            for (int k=0;k<l;k++) {
                C[i][k] += A[i][j] * B[j][k];
            }
        }
    }
    for (int i=0;i<n;i++) {
        for (int k=0;k<l;k++) {
            if (k>0) {
                cout << " ";
            }
            cout << C[i][k];
        }
        cout << endl;
    }
    return 0;
}
