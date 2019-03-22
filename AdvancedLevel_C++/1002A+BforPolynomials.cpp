 #include<iostream>
 using namespace std;
 int main(){
 	int k1=0;
 	int k2=0;
 	scanf("%d",&k1);
 	double n1[1001]={0};//系数是小数，所以数组要用double，设数组最大含量为max 
	double n2[1001]={0};
	int n=0;double a=0;
	int count=0;
 	for(int i=0;i<k1;i++){
 		scanf("%d%lf",&n,&a);
 		n1[n]=a; 
	}
	scanf("%d",&k2);
	for(int i=0;i<k2;i++){
 		scanf("%d%lf",&n,&a);
 		n2[n]=a; 
	}
	for(int i=1000;i>=0;i--){
		if((n1[i]+n2[i])!=0){
			count++;
		}
	}
	printf("%d",count);
	for(int i=1000;i>=0;i--){//输出为数组最大含量-1，即max-1 
		if((n1[i]+n2[i])!=0){
			printf(" %d %.1f",i,n1[i]+n2[i]);//输出一位小数格式：.1f 
		}
	}
 	return 0;
 }
