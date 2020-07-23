#include <iostream>
using namespace std;
 
int main() {
    int M = 13;
    bool S[M], H[M], C[M], D[M];
    for (int i=0;i<M;i++) {
        S[i] = false;
        H[i] = false;
        C[i] = false;
        D[i] = false;
    }
    int n;
    cin >> n;
    char c;
    int k, l;
    for (int i=0;i<n;i++) {
        cin >> c;
        cin >> l;
        k = l-1;
        switch (c) {
            case 'S':
                S[k] = true;
                break;
            case 'H':
                H[k] = true;
                break;
            case 'C':
                C[k] = true;
                break;
            case 'D':
                D[k] = true;
                break;
        }
    }
    for (int i=0;i<M;i++) {
        k = i+1;
        if (!S[i]) {
            cout << "S " << k << endl;
        }
    }
    for (int i=0;i<M;i++) {
        k = i+1;
        if (!H[i]) {
            cout << "H " << k << endl;
        }
    }
    for (int i=0;i<M;i++) {
        k = i+1;
        if (!C[i]) {
            cout << "C " << k << endl;
        }
    }
    for (int i=0;i<M;i++) {
        k = i+1;
        if (!D[i]) {
            cout << "D " << k << endl;
        }
    }
    return 0;
}
