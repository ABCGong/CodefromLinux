#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int a[505][505];
	int M,N,A,B,T;
	cin>>M>>N>>A>>B>>T;
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]>=A&&a[i][j]<=B){
				a[i][j]=T;
			}
			if(j!=N-1) printf("%03d ",a[i][j]);
			else printf("%03d\n",a[i][j]);
		}
	}
	
	
	return 0;
} 
