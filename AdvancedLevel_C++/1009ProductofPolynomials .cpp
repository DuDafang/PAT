#include<iostream>
using namespace std;
int main(){
	int k1=0,k2=0;
	int n=0;
	double a=0.0;
	double n1[1001]={0.0};
	double n2[1001]={0.0};
	double n3[2010]={0.0};
	scanf("%d",&k1);
	for(int i=0;i<k1;i++){
		scanf("%d%lf",&n,&a);
		n1[n]=a;
	}
	scanf("%d",&k2);
	for(int i=0;i<k2;i++){
		scanf("%d%lf",&n,&a);
		n2[n]=a;
	}
	for(int i=0;i<1001;i++){//注意这里ij的大小，最小为1000，因为指数是可以取到1000的，不然有测试点过不去 
		for(int j=0;j<1001;j++){
			int mm=i+j;
			n3[i+j]+=(n1[i]*n2[j]);
		}
	}
	int count=0;
	for(int i=2000;i>=0;i--){
		if(n3[i]!=0.0) count++;
	}
	printf("%d",count);
	for(int i=2000;i>=0;i--){//注意这里i的取值，最大系数为1000+1000 
		if(n3[i]!=0.0) printf(" %d %.1f",i,n3[i]);
	}
	return 0;
} 
