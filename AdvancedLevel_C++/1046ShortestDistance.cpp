#include<iostream>
#include<algorithm> 
using namespace std;
int dis[100010]={0};
int total;//������bug�ܾã�ԭ����total��ʼֵ��Ϊ��...����������һ��Ϊ�� 
int main(){
	int n;
	
	
	cin>>n;
	int s;
	for(int i=1;i<=n;i++){
		cin>>s;
		dis[i]=s+dis[i-1];//��ǰ�����ݴ���ɣ���һ���㵽Ŀ���ľ��룬��Ȼ�ᳬʱ 
		total+=s; 
	}
	int m;
	cin>>m;
	int a,b;
	int shortest[m]={0}; 
	for(int i=0;i<m;i++){
		cin>>a>>b;
		//����ab˳�򣬷�ֹǰһ�����ִ��ں�һ��˳��
		if(a>b){
			swap(a,b);
		} 
		shortest[i]=dis[b-1]-dis[a-1];
		shortest[i]=min(shortest[i],total-shortest[i]);
		printf("%d\n",shortest[i]);
	}
	return 0;
} 
