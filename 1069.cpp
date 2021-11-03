#include<iostream>
using namespace std;
int main(){
	int M,N,S;
	string str[1005]="";
	bool ifornot[1005]={false};
	cin>>M>>N>>S;
	for(int i=1;i<=M;i++){
			cin>>str[i];
	}
	int m=S;
	
	int sum=0;
	while(m<=M){
	
	if(ifornot[m]==false){
	cout<<str[m]<<endl;
	sum++;
	}
	else if(ifornot[m]==true){
	
	 for(int pp=m+1;pp<=M;pp++){
		if(ifornot[pp]==false&&str[pp]!=str[m]){
			cout<<str[pp]<<endl;
			sum++;
			m=pp;
			break;
		}
	  }
	}
	for(int i=m;i<=M;i++){
 		if(str[i]==str[m]) ifornot[i]=true;
	}
		m=m+N;
	}
	if(sum==0) cout<<"Keep going...";
	
	return 0;
} 
