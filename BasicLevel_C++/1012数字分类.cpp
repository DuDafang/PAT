#include<iostream>
using namespace std;
int main() {
	int n;
	scanf("%d",&n);
	int x;
	float count=0.0;//float是因为最后输出要有小数 
	int aa2[10000]={0};//为了达到交错相加的目的，把符合条件的数存在数组里，然后判断是第几个数字，执行相应加减 
	int read=0; //交错相加阶段的计数君~ 
	int max=0;
	int a1=0,a2=0,a3=0,a4=0,a5=0;
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		if(x%5==0&&x%2==0) a1=a1+x;
		if(x%5==1){
			aa2[read]=x;//符合条件的数存入数组，为了之后的交错相加 
			read++;
		}
		if(x%5==2) a3++;
		if(x%5==3){
			count++;
			a4=a4+x;
		}
		if(x%5==4){
			if(x>max) max=x;
		}
	}
	for(int i=0;i<n;i++){//交错相加阶段 
		if(i%2==0) a2=a2+aa2[i];
		else a2=a2-aa2[i]; 
	}  
	float aa4=a4/count;//为了a4显示小数，创造浮点数 
	if(a1!=0) printf("%d ",a1);
	else printf("N ");
	if(read!=0) printf("%d ",a2);//之所以是判断read，是因为a2可能交错相加之后为0，不能忽视这种情况（由此可推pat很多测试点都很特殊，不能轻易忽视 
	else printf("N ");
	if(a3!=0) printf("%d ",a3);
	else printf("N ");
	if(a4!=0) printf("%.1f ",aa4);
	else printf("N ");
	if(max!=0) printf("%d",max);
	else printf("N");
	return 0;
}
