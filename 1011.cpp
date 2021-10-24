#include<iostream>
#include<string>
using namespace std;
int main()
{
int T;
cin>>T;
long long A,B,C;
for(int i=1;i<=T;i++){
	cin>>A>>B>>C;
	if(A+B>C){
		cout<<"Case #"<<i<<": true"<<endl;
}else{
	cout<<"Case #"<<i<<": false"<<endl;
}
}
  return 0;
}

