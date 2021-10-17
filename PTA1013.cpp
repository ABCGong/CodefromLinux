#include<iostream>
using namespace std;
#define maxn 10009
bool pr[maxn]={false};
int p[maxn]={0};
int num=0;
void findall(int n){
	for(int i=2;i<maxn;i++){
		if(pr[i]==false){
		    p[num++]=i;	
		}
		if(num>=maxn) break;
		for(int j=2*i;j<maxn;j+=i){
			pr[j]=true;
		}
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	findall(m);
	n=n-1;
	m=m-1;
int w=1;
	for(int i=n;i<=m;i++){
		if(i==m) cout<<p[i];
		else if(w!=10){
		 cout<<p[i]<<" ";
		 w++;
	}
		else if(w==10){
			cout<<p[i]<<endl;
			w=1;
		}
	}
	
	
	return 0;
}
