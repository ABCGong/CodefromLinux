#include<iostream>
#include<string>
using namespace std;
int main(){
	string k;
	int arry[13]={0};
	cin>>k;
	int len =k.length();
	for(int i=0;i<len;i++){
		int j=k[i]-'0';
		arry[j]++;
	}
	 int i=-1;
	 while(true){
	 
	 if(arry[++i]!=0){
	 	if(arry[i]==0){
	 		cout<<i<<":"<<arry[i];
		 }else{
		 
	 
	 	cout<<i<<":"<<arry[i]<<endl;
	 }
	 }
	 
	 if(i>9) break;
	 
	 
}
	
	
	
	return 0;
}