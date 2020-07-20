#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int h, w;
    while (true) {
        cin >> h >> w;
        if ( h== 0 && w == 0) {
            break;
        }
        string line = string(w, '#');
        for (int i=0;i<h;i++) {
            cout << line << endl;
        }
        cout << endl;
    }
    return 0;
}
