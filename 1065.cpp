#include<stdio.h>
#include<iostream>//一直测试点2没过到 
using namespace std;
int men[100001];
int cop[50001][2];
int main(){
	int N,M;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>cop[i][0]>>cop[i][1];
	}
	cin>>M;
	int man;
	for(int i=0;i<M;i++){
		cin>>man;
		men[man]=1;//给待检查的人以编号作为men的下标，置1记录 
	}
	
	int count=0;//计算情侣的人数 
	for(int i=0;i<N;i++){
		if(men[cop[i][0]]>0&&men[cop[i][1]]>0){//如果men数组的情侣1和2的编号>0则代表 两个人都不是单身狗 
			men[cop[i][0]]=0; //删掉情侣两人，men数组对于值置为0 
			men[cop[i][1]]=0;
			count+=2;
		}
	}
	cout<<M-count<<endl;
	
	int flag=1;//空格标记 
	for(int i=0;i<100001;i++){
		if(men[i]>0){//只打印不为0的人 
			if(flag){
				printf("%05d",i);//测试点3 
				flag=0;
				
			}else{
				cout<<" ";
				printf("%05d",i);//测试点3 
			} 		
		}
	}
	return 0;
} 
