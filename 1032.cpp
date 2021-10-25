#include<iostream>
#include<algorithm>
using namespace std;


int main(){
long long n;
cin>>n;
long long a,b;
long long stu[100005]={0};
long long maxnum=1;
while(cin>>a>>b){
	stu[a]+=b;
	if(maxnum<a) maxnum=a;
}
long long max=stu[1];
long long j=1;
for(long long i=1;i<=maxnum+1;i++){
	if(max<stu[i]) {
	max=stu[i];
	j=i;}

}
cout<<j<<" "<<max<<endl;
	return 0;
} 
