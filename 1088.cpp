#include <iostream>
#include <cmath>
using namespace std;
int m, x, y;
void print(double t) {
    if (m == t) {printf(" Ping");}
    else if (m < t){ printf(" Cong");}
    else {printf(" Gai");}
}
int main() {
    cin>>m >> x >> y;
    for (int i = 99; i >= 10; i--) {//从99开始,第一个就是最大!!! 
        int j = i % 10 * 10 + i / 10;
        double k = (double)abs(j - i)  / x;
        if ((double)j/y == k ) {
            cout << i;
            print(i); 
            print(j); 
            print(k);
            return 0;
        }
    }
    cout << "No Solution";
    return 0;
}

