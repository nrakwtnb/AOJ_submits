#include <iostream>
using namespace std;

int main(){
    int a, b;
    string rel;
    cin >> a >> b;
    if (a<b) {
        rel = "<";
    } else if (a>b) {
        rel = ">";
    } else {
        rel = "==";
    }
    cout << "a " << rel << " b" << endl;
    return 0;
}
