#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,num,a1=0,a2=0,a5=0;
	double a4=0.0;
	cin>>n;
	vector<int> v[5];//v中的每一个都是一个vector容器 
	for(int i=0;i<n;i++){
		cin>>num;
		v[num%5].push_back(num);//num放入相应的容器中 
	}
	for(int i=0;i<5;i++){//v中的五个容器 
		for(int j=0;i<v[i].size();j++){//每个容器中的数 
			if(i==0&&v[i][j]%2==0) a1+=v[i][j];//符合第一条要求的，放入容器1 
			if(i==1&&j%2==0) a2+=v[i][j];
			if(i==1&&j%2==1) a2-=v[i][j];
			if(i==3) a4+=v[i][j];//求和，一会算平均数 
			if(i==4&&v[i][j]>a5)a5=v[i][j];//a5一直为最大 
		}
	}
	for(int i=0;i<5;i++){
		if(i!=0)printf(" ");//输出中间的空格 
		if(i==0&&a1==0||i!=0&&v[i].size()==0){//1=0是什么操作？ 难道vector不是从0开始？ 
			printf("N");
			continue;//结束本次循环，进行下一个循环 
		}
		if(i==0) printf("%d",a1);
		if(i==1) printf("%d",a2);
		if(i==2) printf("%d",v[2].size());
		if(i==3) printf("%.1f",a4/v[3].size());
		if(i==4) printf("%d",a5);
	}
	return 0;
}
