#include<iostream>
using namespace std;
int main(){
	string str;
	getline(cin,str);
	int count=0;
	for(int i=0;i<str.length();i++){
		if(str[i]>='a'&&str[i]<='z'){
			count+=str[i]+1-'a';
		}if(str[i]>='A'&&str[i]<='Z'){
			count+=str[i]+1-'A';
		}
	}
	int zero=0,one=0;
	while(count>0){
		if(count%2==0){
			zero++;
		}else{
			one++;
		}count=count/2;
	}
	cout<<zero<<" "<<one;
	return 0;
}

