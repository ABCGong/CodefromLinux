#include<stdio.h>
#include<iostream>//һֱ���Ե�2û���� 
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
		men[man]=1;//�����������Ա����Ϊmen���±꣬��1��¼ 
	}
	
	int count=0;//�������µ����� 
	for(int i=0;i<N;i++){
		if(men[cop[i][0]]>0&&men[cop[i][1]]>0){//���men���������1��2�ı��>0����� �����˶����ǵ��� 
			men[cop[i][0]]=0; //ɾ���������ˣ�men�������ֵ��Ϊ0 
			men[cop[i][1]]=0;
			count+=2;
		}
	}
	cout<<M-count<<endl;
	
	int flag=1;//�ո��� 
	for(int i=0;i<100001;i++){
		if(men[i]>0){//ֻ��ӡ��Ϊ0���� 
			if(flag){
				printf("%05d",i);//���Ե�3 
				flag=0;
				
			}else{
				cout<<" ";
				printf("%05d",i);//���Ե�3 
			} 		
		}
	}
	return 0;
} 
