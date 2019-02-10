#include<iostream>
#include<algorithm> 
using namespace std;
int dis[100010]={0};
int total;//这里找bug很久，原因是total初始值不为零...定义在外面一定为零 
int main(){
	int n;
	
	
	cin>>n;
	int s;
	for(int i=1;i<=n;i++){
		cin>>s;
		dis[i]=s+dis[i-1];//提前将数据处理成，第一个点到目标点的距离，不然会超时 
		total+=s; 
	}
	int m;
	cin>>m;
	int a,b;
	int shortest[m]={0}; 
	for(int i=0;i<m;i++){
		cin>>a>>b;
		//调换ab顺序，防止前一个数字大于后一个顺序
		if(a>b){
			swap(a,b);
		} 
		shortest[i]=dis[b-1]-dis[a-1];
		shortest[i]=min(shortest[i],total-shortest[i]);
		printf("%d\n",shortest[i]);
	}
	return 0;
} 
