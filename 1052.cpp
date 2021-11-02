#include<iostream>
#include<string>
using namespace std;

int main(){
	string a,b,c;
	getline(cin,a);
	getline(cin,b);
    getline(cin,c);
	int lena=a.length() ;
	string stra[15];
	int ta=0;
		for(int i=0;i<lena;i++){	
		if(a[i]=='['){
			while(a[i+1]!=']'){
				stra[ta]+=a[++i];
			}
			ta++;
	 }
	}
	int lenb=b.length() ;
	string strb[15];
	int tb=0;
		for(int i=0;i<lenb;i++){	
		if(b[i]=='['){
			while(b[i+1]!=']'){
				strb[tb]+=b[++i];
			}
			tb++;
	 }
	}
	int lenc=c.length() ;
	string strc[15];
	int tc=0;
		for(int i=0;i<lenc;i++){	
		if(c[i]=='['){
			while(c[i+1]!=']'){
				strc[tc]+=c[++i];
			}
			tc++;
	 }
	}
    
	int k;
	cin>>k;
	for(int i=0;i<k;i++){
		int q,w,e,r,t;
		cin>>q>>w>>e>>r>>t;
		if(q<ta+1&&t<ta+1&&w<tb+1&&r<tb+1&&e<tc+1&&q>0&&w>0&&e>0&&r>0&&t>0) cout<<stra[q-1]<<"("<<strb[w-1]<<strc[e-1]<<strb[r-1]<<")"<<stra[t-1]<<endl;
		else cout<<"Are you kidding me? @\\/@"<<endl;
	}
	
	return 0;
} 
