#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int bao(string a,int b);
int pao(int a,int num);
int main(){
	string a,b,p,q;
	int c,d;
	cin>>a;
	cin>>c;
	cin>>b;
	cin>>d;
	int sum1=0,sum2=0;
	
	int num1=bao(a,c);
	int num2=bao(b,d);
	
	
	for(int i=0;i<num1;i++){
		 sum1=c*pow(10,i)+sum1;
	}
	for(int i=0;i<num2;i++){
		 sum2=d*pow(10,i)+sum2;
	}
    
	cout<<sum1+sum2<<endl;
	return 0;
} 
int bao(string a,int b){
	int i=a.length();
	int sum=0;
	while(i>=1){
		if(a[i-1]-'0'==b) sum++;
		i--;
	}
	return sum;
}




