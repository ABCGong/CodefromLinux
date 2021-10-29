#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	double max=0;
	for(int i=0;i<n;i++){
		int one=0;
		int two=0;
		cin>>one>>two;
		double jieguo=sqrt(one*one+two*two);
		if(jieguo>max){
			max=jieguo;
		}
	}
	printf("%.2f",max);
	
	
	return 0;
} 
