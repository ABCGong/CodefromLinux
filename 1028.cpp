#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
struct person{
	string name;
	string birth;
};
bool cmp(person person1,person person2){
	return person1.birth<person2.birth;
}
int main(){
	person person[100005];
	long long n;
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>person[i].name>>person[i].birth; 
		
	} 
	sort(person,person+n,cmp);
	bool flag=false;
	int p=0;
	int q=0;
	for(int i=0;i<n;i++){
		if(person[i].birth<"1814/09/06") p++;
		else break;
	} 
	for(int i=n-1;i>=0;i--){
		if(person[i].birth>"2014/09/06") q++;
		else break;
	} 
	if(n-(p+q)!=0) cout<<n-(p+q)<<" "<<person[p].name<<" "<<person[n-q-1].name;
	else cout<<"0"; 
	return 0;
} 
