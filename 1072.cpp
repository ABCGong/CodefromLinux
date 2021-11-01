#include<iostream>
using namespace std;
int main(){
	int n,m;
	int str[6];
	int sum=0;
	int sump=0;
	string name;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>str[i];
	}
	for(int i=0;i<n;i++){
		name="";
		cin>>name;
		bool na=true;
		int num;
		cin>>num;
        bool oo=false;
		for(int j=0;j<num;j++){
		int targ;
		cin>>targ;
			for(int i=0;i<m;i++){
				if(targ==str[i]) {
					if(na){
						cout<<name<<":";
						sum++;
						na=false;
					}
					sump++;
					printf(" %04d",targ);
					oo=true;
				}
			}
            
			
	}
	
		if(oo) cout<<endl;
		
	}
	
	cout<<sum<<" "<<sump;
	
	return 0;
}
