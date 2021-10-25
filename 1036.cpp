#include<iostream>
using namespace std;
int main(){
	int n;
	char a;
	cin>>n>>a;
	for(int i=0;i<n;i++){
		cout<<a;
	}
	cout<<endl;
	int l=((n+1)/2)-2;
	while(l--){
	
	for(int i=0;i<n;i++){
		if(i==0||i==n-1) cout<<a;
		else cout<<" ";
	}
	cout<<endl;
	
}
	for(int i=0;i<n;i++){
		cout<<a;
	}
	return 0;
} 
