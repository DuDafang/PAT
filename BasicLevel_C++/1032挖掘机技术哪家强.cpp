#include<cstdio>
using namespace std;
int main(){
	int n;
	int number,score;
	int school[100000] ={0};//���ֶδ��󣬼ǵ��Ų������С�Ƿ���� 
	int k=-1;//��߷��п���Ϊ0 
	int j=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&number,&score);
		school[number]+=score; 
	}
	for(int i=1;i<=n;i++){//int i=1��Ҫ��ѧУ�����ѡ��i=0����һ��ѧУ��� 
		if(school[i]>k){
			k=school[i];
			j=i;
		}
	}
	printf("%d %d",j,k);
	return 0;
} 
