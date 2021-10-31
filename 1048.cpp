/*别人的代码*/ 
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string a, b, c;
    cin >> a >> b;
    int lena = a.length(), lenb = b.length();
    reverse(a.begin(), a.end());//倒置的函数及其用法 
    reverse(b.begin(), b.end());
    if (lena > lenb) 
        b.append(lena - lenb, '0');//补齐0 两串补齐; 
    else
        a.append(lenb - lena, '0');
    char str[14] = {"0123456789JQK"};//直接打个表 
    for (int i = 0; i < a.length(); i++) {
        if (i % 2 == 0) {
            c += str[(a[i] - '0' + b[i] - '0') % 13];
        } else {
            int temp = b[i] - a[i];
            if (temp < 0) temp = temp + 10;
            c += str[temp];
        }
    }
    for (int i = c.length() - 1; i >= 0; i--)
        cout << c[i];
    return 0;
}
//我的代码只有15分 
/*#include<iostream>
#include<cmath>
using namespace std;
int main(){
	string a,b,anew,bnew;
	cin>>a>>b;
	string jieguo;
	int anum=a.length();
	int bnum=b.length() ;
	for(int i=1;i<=anum;i++){
		anew[i]=a[anum-i];
	}
	for(int i=1;i<=bnum;i++){
		bnew[i]=b[bnum-i];
	}

	if(bnum>=anum){
	
	for(int i=1;i<=anum;i++){
		if(i%2!=0){
			int w=((anew[i]-'0')+(bnew[i]-'0'))%13;
			if(w>=10){
				if(w==10) jieguo+='J';
			    if(w==11) jieguo+='Q';
				if(w==12) jieguo+='K';	
			}
			else jieguo+=(w+'0') ;		
	}else{ 
	int w=(bnew[i]-'0')-(anew[i]-'0');
		if(w<0) {
			w+=10;
			jieguo+=(w+'0');
		}else{
			jieguo+=(w+'0');
		}
	}
  }
  for(int i=anum+1;i<bnum+1;i++){
  	jieguo+=bnew[i];
  }
	for(int i=bnum-1;i>=0;i--){
		cout<<jieguo[i];
	}

}else{
	for(int i=1;i<=bnum;i++){
		if(i%2!=0){
			int w=((anew[i]-'0')+(bnew[i]-'0'))%13;
			if(w>=10){
				if(w==10) jieguo+='J';
			    if(w==11) jieguo+='Q';
				if(w==12) jieguo+='K';	
			}
			else jieguo+=(w+'0') ;		
	}else{ 
	int w=(bnew[i]-'0')-(anew[i]-'0');
		if(w<0) {
			w+=10;
			jieguo+=(w+'0');
		}else{
			if(w==0) jieguo+='J';
			else jieguo+=(w+'0');
		}
	}
  }
  
	for(int i=bnum-1;i>=0;i--){
		cout<<jieguo[i];
	}
	
}
	

	return 0;
} 
