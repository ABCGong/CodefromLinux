#include<iostream>
#include<string>
using namespace std;
/*()>not>and>or*/
int main()
{
    string str1,str2,temp;
    int a[100001]={0}; 
	int b[100001]={0};
	int c[100001]={0};
	int num1,num2,mz,fuhao=0;
    cin>>str1>>str2;
    num1=str1.length();
    num2=str2.length();
    if(num1<num2||num1==num2&&str1<str2)//�������str1-str2,�����������,Ҫ��Ӹ��� 
    {
    	temp=str1;
		str1=str2;
		str2=temp;
		fuhao=-1;
		 
	}
    for(int i=1;i<=num1;i++) a[i]=str1[num1-i]-'0';
    for(int i=1;i<=num2;i++) b[i]=str2[num2-i]-'0';
    int i=1;//�������str1-str2 
    while(i<=num1||i<=num2)
    {
        if(a[i]<b[i])
		{a[i+1]--;a[i]+=10;}//��λ  
        
		c[i]=a[i]-b[i];//�㱾λ,c�д����� 
		 
        i++;
    }
    mz=i;while(c[mz]==0&&mz>1)mz--;//ȥ��ǰ��0
	 
    if(fuhao==-1) cout<<"-";//�ж�����
	 
    for(int i=mz;i>=1;i--) cout<<c[i];
    return 0;
}

