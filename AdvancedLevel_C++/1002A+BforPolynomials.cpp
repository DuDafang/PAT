 #include<iostream>
 using namespace std;
 int main(){
 	int k1=0;
 	int k2=0;
 	scanf("%d",&k1);
 	double n1[1001]={0};//ϵ����С������������Ҫ��double�������������Ϊmax 
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
	for(int i=1000;i>=0;i--){//���Ϊ���������-1����max-1 
		if((n1[i]+n2[i])!=0){
			printf(" %d %.1f",i,n1[i]+n2[i]);//���һλС����ʽ��.1f 
		}
	}
 	return 0;
 }
