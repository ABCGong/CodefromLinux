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
    if(num1<num2||num1==num2&&str1<str2)//计算的是str1-str2,所以如果计算,要添加负号 
    {
    	temp=str1;
		str1=str2;
		str2=temp;
		fuhao=-1;
		 
	}
    for(int i=1;i<=num1;i++) a[i]=str1[num1-i]-'0';
    for(int i=1;i<=num2;i++) b[i]=str2[num2-i]-'0';
    int i=1;//计算的是str1-str2 
    while(i<=num1||i<=num2)
    {
        if(a[i]<b[i])
		{a[i+1]--;a[i]+=10;}//借位  
        
		c[i]=a[i]-b[i];//算本位,c中储存结果 
		 
        i++;
    }
    mz=i;while(c[mz]==0&&mz>1)mz--;//去除前导0
	 
    if(fuhao==-1) cout<<"-";//判定负数
	 
    for(int i=mz;i>=1;i--) cout<<c[i];
    return 0;
}

