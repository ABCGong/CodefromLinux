#include<iostream>
#include<string>
using namespace std;
int main(){
int N,M;
cin>>N>>M;
int arry[300]={0};
M=M%N;
for(int i=0;i<N;i++){
	cin>>arry[i];
}
if(N!=M){

for(int i=0;i<N-M;i++){
	arry[N+i]=arry[i];
	
}

for(int i=N-M;i<2*(N)-M;i++)
{
	if(i==N-M) cout<<arry[i];
	else cout<<" "<<arry[i];
}
}else{
	for(int i=N-1;i>=0;i--)
	{
		if(i==N-1) cout<<arry[i];
	else cout<<" "<<arry[i];
	}
}

return 0;
}