package main

import "fmt"

var n int
var book [150]int
var newbook [150]int
var k int
var end [100]int

func main(){
 fmt.Scan(&k)
 for i:=0;i<k;i++{
	 fmt.Scan(&newbook[i])
	 book[i]=newbook[i]
 }
for i:=0;i<k;i++{
	n=newbook[i]
	for n!=1{
		if n%2==0{
			
		      n/=2
			for j:=0;j<k;j++{
				if newbook[j]==n{
					book[j]=0	
					
				}
				
			
		}
		}else{
			
				n=3*n+1
				n/=2
				for j:=0;j<k;j++{
					if newbook[j]==n{
						book[j]=0	
						
					}
					
				}
			}
		
		}
	}
		p:=0
for i:=0;i<k;i++{
	if book[i]!=0{
		end[p]=book[i]
		p++
		
	}
}

if p==1{
	fmt.Println(end[p-1])
}else{
  for i:=0;i<p-1;i++{
	for j:=i+1;j<p;j++{
		if end[i]<end[j]{
			swap(&end[i],&end[j])
		}
	}
}
r:=p-1

for i:=0;i<p;i++{
	if r!=0{
	fmt.Printf("%d",end[i])
	fmt.Printf(" ")
	r--
	}else{
		fmt.Println(end[i])
	}
	
}


}

}
func swap(a *int,b *int){
	temp:=*a
	*a=*b
    *b=temp	
}