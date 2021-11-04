#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
struct point{
	int X;
	int Y;
	double Z;
};
bool cmp(point a,point b){
	return a.X>b.X;
}
int daozhi(int t){
	int t1=t%10;
	int t2=t/10;
	t1*=10;
	return t1+t2;
}
int main(){
point a[1005];
int m,x,y;
int num=0;
cin>>m>>x>>y;
for(int i=10;i<100;i++){
	double temp1=(double)abs(i-daozhi(i))/(double)x;
	double temp2=(double)daozhi(i)/(double)y; 

	if(temp1==temp2){
	
		a[num].X=i;
		a[num].Y=daozhi(i);
		a[num].Z=temp2;
	

		num++;
	
	}
}
string j,k,l;
sort(a,a+num,cmp);
if(num!=0){
	if(a[0].X>m) j="Cong";
	else if(a[0].X==m) j="Ping";
	else j="Gai";
	
	if(a[0].Y>m) k="Cong";
	else if(a[0].Y==m) k="Ping";
	else k="Gai";
	if(a[0].Z>m) l="Cong";
	else if(a[0].Z==m) l="Ping";
	else l="Gai";
	cout<<a[0].X<<" "<<j<<" "<<k<<" "<<l<<endl; //此处不用换行符,会出错!!会判错!!! 
	
}	
else{
	cout<<"No Solution";
}
	return 0;
} 
