#include<iostream>
using namespace std;
int main(){
	int arry[12]={0};
	for(int i=0;i<10;i++){
		int n;
		cin>>n;
		arry[n]++;
	}
     for(int i=1;i<10;i++){
     	if(arry[i]!=0){
     		cout<<i;
     		arry[i]--;
     		break;
		 }
	 }
	for(int i=0;i<10;i++){
		while(arry[i]--){
			cout<<i;
		}
	} 	
	return 0;
} 
