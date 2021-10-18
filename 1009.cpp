#include<stdio.h>
int main()
{
  int i, j;
  char c[80][80];//定义80个字符串,每个字符串的长度不超过80; 
  for(i = 0;; i++){
    scanf("%s", c[i]); //遇到空格就会结束,开始下一个循环       
    if(getchar() == '\n'){   //新方法,输入一个句子!!!! getchar()=='\n'
      break;
  }
    
  }
  for(j = i; j >= 0; j--){
      if(j != i){          
          printf(" ");
		
      }
    printf("%s", c[j]);
  }
  return 0;
}