#include<iostream>
#include<cmath>
using namespace std;
int main(){
	string name;
	int x,y;
	string winner="";
	string loser="";
	int min=10000;
	int max=0;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>name>>x>>y;
	
		if(sqrt(x*x+y*y)<min){
			min=sqrt(x*x+y*y);
			winner=name;
		}
		if(sqrt(x*x+y*y)>max){
			max=sqrt(x*x+y*y);
			loser=name;
		}
}
	cout<<winner<<" "<<loser<<endl;
	
	return 0;
} 
