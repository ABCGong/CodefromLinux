#include <iostream>
#include<string>
using namespace std;

int main(){
	int an[128]={0};
	int bn[128]={0};
	
string a,b;
cin>>a>>b;

int anum=a.length() ;
int bnum=b.length() ;
for(int i=0;i<anum;i++){
	an[a[i]]++;
}
for(int i=0;i<bnum;i++){
	bn[b[i]]++;
}
int num=0;
for(int i=0;i<128;i++){
	if(bn[i]>0) num++;
}
int newnum=0;
int duoyu=0;
int que=0;
for(int i=0;i<128;i++){
	if(an[i]>0&&bn[i]>0&&an[i]==bn[i]) newnum++;
	if(an[i]>0&&bn[i]>0&&an[i]-bn[i]>0) {
		duoyu+=an[i]-bn[i];
		newnum++;
	}
	if(an[i]>0&&bn[i]>0&&an[i]-bn[i]<0) {
		que+=-an[i]+bn[i];
	
	}
	if(an[i]>0&&bn[i]==0) {
		duoyu+=an[i];
	}
	if(an[i]==0&&bn[i]>0) {
		que+=bn[i];
	}
}
if(newnum==num) cout<<"Yes"<<" "<<duoyu;
else cout<<"No"<<" "<<que;

	return 0;
} 
