#include<iostream>
#include<string>
using namespace std;
string zhuanhua(string a){
	int numa=a.length();
	for(int i=0;i<numa;i++){
		if(a[i]>='a'&&a[i]<='z') a[i]=a[i]-32;
	}
	return a;
}
string quchong(string a){
	int numa=a.length();
	string s;
	int arry[128]={0};
	for(int i=0;i<numa;i++){
		arry[a[i]]+=1;
	}
	for(int i=0;i<numa;i++){
		if(arry[a[i]]>=1) {
			s+=a[i];
			arry[a[i]]=0;
		}
	}

	return s;
}


int main(){
	string a,b;
	cin>>a>>b;
	a=zhuanhua(a);
	b=zhuanhua(b);

	a=quchong(a);
	b=quchong(b);

	int numaa=a.length();
	int numbb=b.length();
	for(int i=0;i<numaa;i++){
		int r=0;
		for(int j=0;j<numbb;j++){
			if(a[i]!=b[j]) r++;
			
		}
		if(r==numbb) cout<<a[i];
	}
	
	return 0;
} 
