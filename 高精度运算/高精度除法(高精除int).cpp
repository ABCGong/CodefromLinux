#include <iostream>
#include <string>
using namespace std;
 //����PTA��Ŀ����д,ֻ�ܴ����� /int 
#define MAX  101;
 
int main() {
    int b, i, la, lc, x;
    string str;
    int a[MAX], c[MAX];
    
    while(cin >> str >> b) { // 1.���������������b
        a[MAX]={0};
        c[MAX]={0}; 
        // ��ȡ�������ĳ���
        la = str.length();
        for(i = 0; i < la; i++)
            a[la-i-1] = str[i] - '0'; 
        // ����c=a/b
        x = 0; // ������ʼΪ0
        for(i = la-1; i >= 0; i--) {
            c[i] = (x * 10 + a[i]) / b; // ����λ�õ�����������10���ټ�����λ�õ������ٳ���b,��λ�õĶ���0 
            x = (x * 10 + a[i]) % b; // �ó�����
        }
        lc = la;
        while(lc > 1 && c[lc-1] == 0) 
            lc--;
        
        for(i = 0; i < lc; i++)
            cout << c[lc-i-1];
        // �������
        cout << " " << x << endl;
   }
    return 0;
}
