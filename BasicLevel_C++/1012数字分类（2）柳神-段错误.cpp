#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,num,a1=0,a2=0,a5=0;
	double a4=0.0;
	cin>>n;
	vector<int> v[5];//v�е�ÿһ������һ��vector���� 
	for(int i=0;i<n;i++){
		cin>>num;
		v[num%5].push_back(num);//num������Ӧ�������� 
	}
	for(int i=0;i<5;i++){//v�е�������� 
		for(int j=0;i<v[i].size();j++){//ÿ�������е��� 
			if(i==0&&v[i][j]%2==0) a1+=v[i][j];//���ϵ�һ��Ҫ��ģ���������1 
			if(i==1&&j%2==0) a2+=v[i][j];
			if(i==1&&j%2==1) a2-=v[i][j];
			if(i==3) a4+=v[i][j];//��ͣ�һ����ƽ���� 
			if(i==4&&v[i][j]>a5)a5=v[i][j];//a5һֱΪ��� 
		}
	}
	for(int i=0;i<5;i++){
		if(i!=0)printf(" ");//����м�Ŀո� 
		if(i==0&&a1==0||i!=0&&v[i].size()==0){//1=0��ʲô������ �ѵ�vector���Ǵ�0��ʼ�� 
			printf("N");
			continue;//��������ѭ����������һ��ѭ�� 
		}
		if(i==0) printf("%d",a1);
		if(i==1) printf("%d",a2);
		if(i==2) printf("%d",v[2].size());
		if(i==3) printf("%.1f",a4/v[3].size());
		if(i==4) printf("%d",a5);
	}
	return 0;
}
