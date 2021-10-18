package main

import "fmt"
type Student struct{
   bookname [10000]string
   bookhao  [10000]string
   bookscore [10000]int
}
var temp [10000]int
var n int
var min int
var max int
var student Student

func main(){
	fmt.Scan(&n)
   for i:=0;i<n;i++{
	   fmt.Scan(&student.bookname[i])
	   fmt.Scan(&student.bookhao[i])
	   fmt.Scan(&student.bookscore[i])  
	   temp[i]=student.bookscore[i]
   }

   for i:=0;i<n-1;i++{
	   for j:=i+1;j<n;j++{
		   if student.bookscore[i]<student.bookscore[j]{
			swap(&student.bookscore[i],&student.bookscore[j])
		   }
	   }
   }
   
   for i:=0;i<n;i++{
   if student.bookscore[0]==temp[i]{
         max =i
		 break
    } 
   }
   for j:=0;j<n;j++{
	if student.bookscore[n-1]==temp[j]{
		  min =j
		  break
	 } 
	}
	fmt.Println(student.bookname[max],student.bookhao[max])
	fmt.Println(student.bookname[min],student.bookhao[min])
}
func swap(x *int,y *int){
	var tempone int
	tempone=*x
	*x=*y
	*y=tempone
}