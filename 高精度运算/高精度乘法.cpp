#include <iostream>
#include<string>
using namespace std;
 
int a[100],b[100],c[100];
 
int main() {
	string s1,s2,t;
	cin>>s1>>s2;
 
	for(int i=0; i<s1.length(); i++) {
		a[i]=s1[s1.length()-i-1]-'0';
	}
	for(int i=0; i<s2.length(); i++) {
		b[i]=s2[s2.length()-i-1]-'0';
	}
 //����Ҫһ���� 
	for(int i=0; i<s1.length(); i++) {
		int carry=0;//����ѭ��.ģ���λ; 
		for(int j=0; j<s2.length(); j++) {
			c[i+j]+=a[i]*b[j]+carry;
			carry=c[i+j]/10;
			c[i+j]%=10;
		}
		// ÿһ��ѭ��֮��Ľ�λ,��Ϊ��ѭ���в��ý����һ����λ���� 
		c[i+s2.length()]+=carry;
	}
 
	int index=s1.length()+s2.length();
 
	//ɾ��ǰ����
	while(c[index]==0 && index>0) index--;
 
	for(int i=index; i>=0; i--)
		cout<<c[i];
 
	cout<<endl;
	return 0;
}
 
