#include<iostream>  
#include<string>  
using namespace std;  
int main()  
{  
  string str1,str2;  
  
  int a[2000]={0};
  int b[2000]={0};
  int len;   //数组大小决定计算的最大位数  
  
  int i;  
  
  cin>>str1>>str2;   
  
  a[0]=str1.length();  //取得字符串的长度  
  
  for(i=1;i<=a[0];i++)  a[i]=str1[a[0]-i]-'0';  
    
  b[0]=str2.length();   
  
  for(i=1;i<=b[0];i++)    b[i]=str2[b[0]-i]-'0';  //用的倒序 
    
  len=(a[0]>b[0]?a[0]:b[0]);   //取两个字符串最大的长度  ,要选一个位数长的 
 //最重要的部分 
  for(i=1;i<=len;i++)   //做按位加法，同时处理进位  
  {  
    a[i]+=b[i];  
    
    a[i+1]+=a[i]/10;  //如果小于10,就会是0 
    
    a[i]%=10;     //本位就是余数 
  }  
  
  len++;    //下面是去掉最高位的0，然后输出。可能会进位 ,所以++ 
    
  while((a[len]==0)&&(len>1)) len--;  
  
  for(i=len;i>=1;i--)  cout<<a[i];  
  return 0;   
}  
   /*思路:先将string转化为int,存在数组中,选择位数大的来限定,每一位数组相加,再有下一位来+上>10的部分,<10的部分就放在本位,最后要删除前导0,避免多输出*/
    


