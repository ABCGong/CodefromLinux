#include<iostream>//有一个测试点没过,但确实看不出来了 
using namespace std;
int main(){
	int a[288]={0};
	string s,st;
	
	getline(cin,s);
	getline(cin,st);
	int sn=s.length();
	int stn=st.length();
	int flag=0;
	for(int i=0;i<sn;i++){
	 if(s[i]=='+') flag=1;
     else if(s[i]==','||s[i]=='.'||s[i]=='-'){
         a[s[i]]=1;
     }  
	 else {
	  a[s[i]+32]=1;	
	  a[s[i]]=1 ;}
	}
	for(int i=0;i<stn;i++){
		if((flag==1&&st[i]>='A'&&st[i]<='Z')||a[st[i]]==1) continue;
		else if(flag==0&&a[st[i]]==1) continue;
		else cout<<st[i];
	}
   cout<<endl;
	return 0;
} 
