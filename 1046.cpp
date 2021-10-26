#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


int main(){
int n;
cin>>n;
int winj=0;
int winy=0;
while(n--){
	
	
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	
	if(b==a+c&&d!=a+c){
		winy++;
       
		continue;
	}
	if(d==a+c&&b!=a+c) {
		winj++;
		continue;
	}

}
cout<<winj<<" "<<winy;
	return 0;
} 
