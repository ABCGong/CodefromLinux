#一周的做题感觉自己越发的菜

----------

 [1009](https://pintia.cn/problem-sets/994805260223102976/problems/994805314941992960)

输入一个句子

	 char c[80][80];//定义80个字符串,每个字符串的长度不超过80; 
	  for(i = 0;; i++){
	    scanf("%s", c[i]);        
	    if(getchar() == '\n'){   
	      break;
	  }

----------

[1026](https://pintia.cn/problem-sets/994805260223102976/problems/994805295203598336)
 
**四舍五入**到整数 +0.5(1/2即可)


**四舍五入**到小数 printf("%.nf")


----------
[1013](https://pintia.cn/problem-sets/994805260223102976/problems/994805309963354112)

筛法求素数

	 void findall(int n){
		for(int i=2;i<maxn;i++){
			if(pr[i]==false){
			    p[num++]=i;	
			}
			if(num>=maxn) break;
			for(int j=2*i;j<maxn;j+=i){
				pr[j]=true;
			}
		}
	}



----------
- pow()函数的运用,比如power(10,5)代表10的5次方
- 在c++中好像用不了upper()和lower(),只有自己写
- ascll码可以方便的解决大小写转换,string->int的转换(同时可以用to_string()),通过直接创建一个足够大(128)的数组,还可以进行去重.
- 写题之前认真分析一下!
- 以及一系列高精度算法