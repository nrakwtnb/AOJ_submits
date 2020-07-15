#include <iostream>
using namespace std;


int main(){
    int W, H, x, y, r;
    bool horizontal, vertical;
    cin >> W >> H >> x >> y >> r;
    horizontal = r <= x && x <= W-r;
    vertical = r <= y && y <= H-r;
    if (horizontal && vertical) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
