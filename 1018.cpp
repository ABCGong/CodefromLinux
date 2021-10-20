#include <iostream>

using namespace std;
int main(){
    int n,s=0,f=0,p=0,ac=0,aj=0,ab=0,bc=0,bj=0,bb=0;
    char a,b;
    cin>>n;;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if((a=='C'&&b=='J')||(a=='J'&&b=='B')||(a=='B'&&b=='C')){
            
            s++;
            if(a=='C') ac++;
            if(a=='B') ab++;
            if(a=='J') aj++;
        }
        else if((a=='C'&&b=='C')||(a=='J'&&b=='J')||(a=='B'&&b=='B')){
           
            p++;
        }else {
           
            f++;
            if(b=='C') bc++;
            if(b=='B') bb++;
            if(b=='J') bj++;
        }

    }
    cout<<s<<" "<<p<<" "<<f<<endl;
	cout<<f<<" "<<p<<" "<<s<<endl;
    cout<<((ac>ab&&ac>=aj)?'C':(ab>=aj?'B':'J'))<<" "<<((bc>bb&&bc>=bj)?'C':(bb>=bj?'B':'J'));
    return 0;
}

