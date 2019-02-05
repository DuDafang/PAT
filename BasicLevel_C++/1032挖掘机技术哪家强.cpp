#include<cstdio>
using namespace std;
int main(){
	int n;
	int number,score;
	int school[100000] ={0};//出现段错误，记得排查数组大小是否出错 
	int k=-1;//最高分有可能为0 
	int j=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&number,&score);
		school[number]+=score; 
	}
	for(int i=1;i<=n;i++){//int i=1，要从学校编号中选，i=0会少一个学校编号 
		if(school[i]>k){
			k=school[i];
			j=i;
		}
	}
	printf("%d %d",j,k);
	return 0;
} 
