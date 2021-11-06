#include<iostream>
#include<cmath>
using namespace std;
	int N;
	int a[10005];
bool sbs(int p){
	if(p==1) return false;
	for(int j=2;j<=sqrt(p);j++){
		if(p%j==0) return false;
	}
	return true;
} 

int main(){
	int N;
	int a[10005];
	int b[10005]={0};
	cin>>N;
	for(int i=1;i<=N;i++){
		cin>>a[i];
		b[i]=0;
	}
	int K;
	cin>>K;
	for(int i=0;i<K;i++){
		int num;
		cin>>num;
		int fa=0;
		for(int i=1;i<=N;i++){
			if(num!=a[i]) fa++; 
		}
		if(fa==N) printf("%04d: Are you kidding?\n",num);
		for(int i=1;i<=N;i++){
			if(num==a[i]){
				if(b[i]==1) printf("%04d: Checked\n",a[i]);
				else if(i==1){
					printf("%04d: Mystery Award\n",a[i]);
					b[i]=1;
				}
				else if(sbs(i)){ 
				printf("%04d: Minion\n",a[i]);
				b[i]=1;
				} 
				
				else{
					printf("%04d: Chocolate\n",a[i]);
					b[i]=1;
				}
				
			}
			
		}
		
		
	}
	
	
	return 0;
}
