#include <iostream>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
    int A[n][m];
    int B[m];
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin >> A[i][j];
        }
    }
    for (int j=0;j<m;j++) {
        cin >> B[j];
    }

    int C[n];
    for (int i=0;i<n;i++) {
        C[i] = 0;
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            C[i] += A[i][j] * B[j];
        }
    }
    for (int i=0;i<n;i++) {
        cout << C[i] << endl;
    }
    return 0;
}
