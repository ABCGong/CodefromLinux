package main

import "fmt"
var n int
var a string
var b  string
var c string
var weishu [3]int

var arr [9]int
func main(){
fmt.Scan(&n)
weishu[2]=n%10
y:=n/10
weishu[1]=(y%10)
m:=n/100
weishu[0]=m
arr:=[9]string{"1","2","3","4","5","6","7","8","9"}


     for i:=0;i<weishu[0];i++{
		 a+="B"
	 }
	 for i:=0;i<weishu[1];i++{
		a+="S"
	}
	for i:=0;i<weishu[2];i++{
		a+=arr[i]
	}

fmt.Println(a)

}