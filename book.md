#求最大公约数(递归)
	typename  gcd(typename a, typename b)//求最大公约数
	{
	    return  b == 0 ? a : gcd(b, a % b);
	}
**即使b>a,在经过一次递归后都会变成(new)a>(new)b**

##知道最大公约数后可以直接用公式将最小公倍数求出
**用a与b的乘积除以他的最大公约数即可得**

最小公倍数=(a*b)/最大公约数

10/27/2021 7:07:42 PM 

#用scanf输入的好处(坚持用scanf!!!)
**[1034](https://pintia.cn/problem-sets/994805260223102976/problems/994805287624491008)**中的输入就是例子!!!

如果用**cin**输入的简直不知道该怎么办

而用**scanf**输入就可以得到其中数字!!然后直接就可以开始后面的编写

----------


#筛法求素数
	const int maxn = 1000001;
	int prime[maxn], num = 0;
	bool p[maxn] = {false};
	void find_prime(int n)
	{
			for(int i = 2; i < maxn; i++){
				if(p[i] == false){
				   prime[num++] = i;
				     if(num >= n) break;
				        for(int j = 2 * i; j < maxn; j += i)	[j] = true;	}
			}
	}

----------

#一些函数(持续更新)
1. **pow()**函数 pow(10,i) 代表10的I次方
2. **hypot( a, b)**函数 输入两直角边返回斜边


----------


#说反话[1009](https://pintia.cn/problem-sets/994805260223102976/problems/994805314941992960)
	
	#include<iostream>	
	int main()
		{
		  int i, j;
		  char c[80][80];//定义80个字符串,每个字符串的长度不超过80; 
		  for(i = 0;; i++){
		    scanf("%s", c[i]);        //一个代表一个单词
		    if(getchar() == '\n'){   //确保输入一个句子
		      break;
		  }
		    
		  }
		  for(j = i; j >= 0; j--){
		      if(j != i){          
		          printf(" ");//输出空格,同时避免开头就来个空格	
		      }
		    printf("%s", c[j]);
		  }
		  return 0;
		}

----------

#数组大小为128的ASCLL码表涵盖0-9,a-z,A-Z
1. 记录数量
2. 去重
3. 大小写转换


----------

#sort函数
**语法**
 
Sort(start,start+n,cmp)
比如start==0,代表数组中的第一个,0+1=1就代表第二个元素


**参数**

（1）start表示要排序数组的起始地址；

（2）end表示数组结束地址的下一位；

（3）cmp用于规定排序的方法，可不填，默认升序。

**功能**

sort函数用于C++中，对给定区间所有元素进行排序，默认为升序，也可进行降序排序。

一般是直接对数组进行排序，例如对数组a[10]排序，sort（a,a+10）。而sort函数的强大之处在可与cmp函数结合
使用，即排序方法的选择。 

	bool cmp(int a,int b)
	{   
	return a>b;
	}

----------

#大数运算
##**输入后将字符转化为数字**
**略**

##**要注意进位**
1. 乘

		 int a[100],b[100],c[100];
				//最重要一部分 
					for(int i=0; i<s1.length(); i++) {
						int carry=0;//两个循环.模拟进位; 
						for(int j=0; j<s2.length(); j++) {
							c[i+j]+=a[i]*b[j]+carry;
							carry=c[i+j]/10;
							c[i+j]%=10;
						}
						// 每一遍循环之后的进位,因为在循环中不好将最后一个进位加上 
						c[i+s2.length()]+=carry;
					}

2. 减

		   int i=1;//计算的是str1-str2 
		    while(i<=num1||i<=num2)
		    {
		        if(a[i]<b[i])
				{a[i+1]--;a[i]+=10;}//借位  
		        
				c[i]=a[i]-b[i];//算本位,c中储存结果 
				 
		        i++;
		    }

3. 加


		//最重要的部分 
		  for(i=1;i<=len;i++)   //做按位加法，同时处理进位  
		  {  
		    a[i]+=b[i];  
		    
		    a[i+1]+=a[i]/10;  //如果小于10,就会是0 
		    
		    a[i]%=10;     //本位就是余数 
		  }  


4. 除

		// 计算c=a/b,此处的b不是大数,只是整型
		        x = 0; // 余数初始为0
		        for(i = la-1; i >= 0; i--) {
		            c[i] = (x * 10 + a[i]) / b; // 将高位得到的余数乘以10，再加上新位置的数，再除以b,补位用的都是0 
		            x = (x * 10 + a[i]) % b; // 得出余数
		        }


##**要注意删除前导零**

		int index=s1.length()+s2.length();
		 
			//删除前导零
			while(c[index]==0 && index>0) index--;
		 
			for(int i=index; i>=0; i--)
				cout<<c[i];
只是一个例子,但是每种运算中都要删除前导零

#[1032 挖掘机技术哪家强](https://pintia.cn/problem-sets/994805260223102976/problems/994805289432236032)
**记录院号的方法(不断更新,不断比较)**