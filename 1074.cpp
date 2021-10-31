#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	string m,n1,n2;
	string jieguo;
	cin>>m>>n1>>n2;
	reverse(m.begin(),m.end());
	reverse(n1.begin(),n1.end());
	reverse(n2.begin(),n2.end() );
	int q=m.length() ;
	int w=n1.length() ;
	int e=n2.length() ;
	n1.append(21-w,'0');
	n2.append(21-e,'0');  
    int yu=0; 
  
    for(int i=0;i<21;i++){
    	
    	if(m[i]=='0'){
    	
    	jieguo+=((n1[i]-'0'+n2[i]-'0'+yu)%10)+'0';
    	yu=(n1[i]-'0'+n2[i]-'0'+yu)/10;
		}else{
			jieguo+=((n1[i]-'0'+n2[i]-'0'+yu)%(m[i]-'0'))+'0';
    	    yu=(n1[i]-'0'+n2[i]-'0'+yu)/(m[i]-'0');
		}
	}
	reverse(jieguo.begin(),jieguo.end() );
	
	int len=jieguo.length();
	int begin=0;
while(jieguo[begin]=='0'&&begin<len-1) begin++;
for(int i=begin;i<len;i++){
	cout<<jieguo[i];
}
	
	return 0;
} 
