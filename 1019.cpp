#include<iostream>//注意格式(尤其是空格) 
#include<algorithm>

using namespace std;
int b[4];
int sum;
void zhuhua1(int a,int *b){
	b[0]=a/1000;
	b[1]=(a/100)%10;
	b[2]=(a/10)%10;
	b[3]=a%10;
}
int zhuhua2(int *a){
    sum=a[0]*1000+a[1]*100+a[2]*10+a[3];
	return sum; 	
}
bool cmp(int a,int b){
	return a>b;
}
int main(){
int n;
cin>>n;
while(true){
	zhuhua1(n,b);
	sort(b,b+4,cmp);
	int max=zhuhua2(b);
	sort(b,b+4);
	int min=zhuhua2(b);

	n=max-min;
	if(n!=0||n!=6174) printf("%04d - %04d = %04d\n",max,min,n);
	else printf("%04d - %04d = %04d",max,min,n);
	if(n==0||n==6174) break;
}
		
	return 0; 
}
 


