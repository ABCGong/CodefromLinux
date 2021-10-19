#include <iostream>
#include <string>
using namespace std;
 //依据PTA题目并编写,只能大整数 /int 
#define MAX  101;
 
int main() {
    int b, i, la, lc, x;
    string str;
    int a[MAX], c[MAX];
    
    while(cin >> str >> b) { // 1.输入大整数和整数b
        a[MAX]={0};
        c[MAX]={0}; 
        // 获取大整数的长度
        la = str.length();
        for(i = 0; i < la; i++)
            a[la-i-1] = str[i] - '0'; 
        // 计算c=a/b
        x = 0; // 余数初始为0
        for(i = la-1; i >= 0; i--) {
            c[i] = (x * 10 + a[i]) / b; // 将高位得到的余数乘以10，再加上新位置的数，再除以b,补位用的都是0 
            x = (x * 10 + a[i]) % b; // 得出余数
        }
        lc = la;
        while(lc > 1 && c[lc-1] == 0) 
            lc--;
        
        for(i = 0; i < lc; i++)
            cout << c[lc-i-1];
        // 输出余数
        cout << " " << x << endl;
   }
    return 0;
}
