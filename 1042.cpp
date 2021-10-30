#include<iostream>
using namespace std;
int main(){
	string m="abcdefghijklmnopqrstuvwxyz";
	string str;
	int a[128]={0};
	getline(cin,str);
	int len=str.length();
    for(int i=0;i<len;i++){
    	if(str[i]>='a'&&str[i]<='z') a[str[i]]++;
    	else if (str[i]>='A'&&str[i]<='Z') a[str[i]+32]++;
	}
	int max=0;
	for(int i=97;i<128;i++){
		if(a[i]>=max) max=a[i];
	}
	

	for(int i=97;i<123;i++){
		if(a[i]==max){
			cout<<m[i-97]<<" "<<max;
			break;
		}
	}
	return 0;
} 
