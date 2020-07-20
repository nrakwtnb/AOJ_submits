#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 

void print(int h, int w) {
    char x[h][w];

    for (int i=0;i<h;i++) {
        for (int j=0;j<w;j++) {
            if (i==0 || i == h-1 || j==0 || j == w-1) {
                x[i][j] = '#';
            } else {
                x[i][j] = '.';
            }
        }
    }

    for (int i=0;i<h;i++) {
        for (int j=0;j<w;j++) {
            cout << x[i][j];
        }
        cout << endl;
    }
}


int main() {
    int h,w;
    while (true) {
        cin >> h >> w;
        if ( h== 0 && w == 0) {
            break;
        }
        print(h, w);
        cout << endl;
    }
    return 0;
}

