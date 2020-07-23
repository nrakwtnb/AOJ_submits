#include <iostream>
using namespace std;
 
int comb2(int m, int s) {
    if ( s>=3 && s<=2*m-1 ) {
        return min( max( m-s/2,0 ), (s-1)/2 );
    } else {
        return 0;
    }
}


int main() {
    while (true) {
        int n, x;
        cin >> n >> x;

        if (n == 0 && x==0) {
            break;
        }

        int res = 0;
        int tmp = 0;
        for (int i=min(n,x-3);i>0;i--) {
            tmp = comb2(i-1, x-i);
            if (tmp == 0) {
                break;
            }
            res += tmp;
        }
        cout << res << endl;
    }
    return 0;
}
