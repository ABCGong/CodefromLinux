#include<iostream>

using namespace std;
int main(){
	long long c1,c2;
	cin>>c1>>c2;
	long  long a=(c2-c1+50)/100;//50/100=0.5  相当于保留整数的四舍五入. 13.5到14.5都会是14. 
	
	long long x=a/3600;
	long long y=(a%3600)/60;
	long long  z=a%60;
	printf("%02d:%02d:%02d",x,y,z);
	
	return 0;
}
