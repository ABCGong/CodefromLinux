#include<iostream>//21分代码,一个测试点超时 
#include<cmath>
#include<algorithm>
using namespace std;
long long a[1000005];
long long n;
bool tt(long long p,long long a[]){
	long long ta=0;
	for(long long i=n;i>0;i--){
		if(p<a[i]) ta++;
		if(ta>=p) return true;		
	}
	
	return false;
	
}
int main(){

	
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	long long max=a[1];
	for(long long i=a[i];i<=n;i++){
		if(tt(i,a)){
			 max=i;
		}
	}
	cout<<max<<endl;

	return 0;
} 
