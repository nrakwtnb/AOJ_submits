#include <iostream>
using namespace std;
 
int main() {
    int m, f, r;
    int m_, f_, r_;
    int score;
    while (true) {
        cin >> m >> f >> r;
        m_ = m==-1;
        f_ = f==-1;
        r_ = r==-1;
        score = m+f;
        if ( m_+f_+r_ == 3 ) {
            break;
        }
        if (m_ == 1 || f_ == 1) {
            cout << "F" << endl;
            continue;
        }
        char grade;
        if (score >= 80) {
            grade = 'A';
        } else if (score >= 65) {
            grade = 'B';
        } else if (score >= 50) {
            grade = 'C';
        } else if (score >= 30) {
            if (r >= 50) {
                grade = 'C';
            } else {
                grade = 'D';
            }
        } else {
            grade = 'F';
        }
        cout << grade << endl;
    }
    return 0;
}
