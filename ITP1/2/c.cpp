#include <iostream>
#include <stdio.h>
using namespace std;


int main(){
    int a, b, c, x, y, z;
    cin >> a >> b >> c;
    x = min(min(a, b), c);
    z = max(max(a, b), c);
    y = a+b+c-x-z;
    printf("%d %d %d\n",x,y,z);
    return 0;
}
