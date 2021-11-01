#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int b;
    int a[1000]={0};
    int jg[1000]={0};
    cin>>str>>b;
    int len=str.length();
    for(int i=0;i<len;i++){
        a[len-1-i]=str[i]-'0';
        
    }
    int yu=0;
    for(int i=len-1;i>=0;i--){
        jg[i]=(yu*10+a[i])/b;
        yu=(yu*10+a[i])%b;
        
    }
    int lim=len;
    while(lim>1&&jg[lim-1]==0){
        lim--;
    }
    for(int i=0;i<lim;i++){
        cout<<jg[lim-1-i];
        
    }
    cout<<" "<<yu<<endl; 
    return 0;
}
