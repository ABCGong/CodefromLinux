#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int l,k;
long long zh(string w){
	int len=w.length() ;
	long long jieguo=0;
	int temp=0;
	for(int i=len-1;i>=0;i--){
		jieguo+=(w[i]-'0')*pow(10,temp);
		temp++;
	}
	return jieguo;
}
bool Is_prime( string p){
	long long m=zh(p);
	//if(m==2) return true;一和零不是质数!!
    if(m==0||m==1) return false;
	for(int i=2;i<=sqrt(m);i++){
		if(m%i==0) return false;
	}
	return true;
}
int main(){
	int ji=0;
	cin>>l>>k;
	string n;
	cin>>n;
	for(int i=0;i<l-k+1;i++){
		int m=k;
		string p="";
		int j=i;
		while(m--){
			
			p+= n[j];
			j++;
		}
		if(Is_prime(p)) {
		cout<<p<<endl;
		break;}else{
			ji++;
		}
	}
	if(ji==(l-k)+1){
		cout<<"404";
	}
	return 0;
} 
