#include<iostream>//结构的做法，来自晴神算法笔记
struct Poly{
	int exp;//指数
	double cof;//系数 
}poly[1001];//第一个多项式  
double ans[2001];//存放结果
int main(){
	int n,m,number=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %lf",&poly[i].exp,&poly[i].cof);
	}
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		int exp;
		double cof;
		scanf("%d%lf",&exp,&cof);
		for(int j=0;j<n;j++){
			ans[exp+poly[j].exp]+=(cof*poly[j].cof);
		}
	}
	for(int i=0;i<=2000;i++){
		if(ans[i]!=0.0) number++;
	}
	printf("%d",number);
	for(int i=2000;i>=0;i--){
		if(ans[i]!=0.0){
			printf(" %d %.1f",i,ans[i]);
		} 
	}
	return 0;
} 
