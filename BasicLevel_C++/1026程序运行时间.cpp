#include<iostream>
using namespace std;
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int ans=b-a;
	if(ans%100>=50){//���������λ�Ƿ������ʮ�����ж�/100֮�����ỹ���� 
		ans=ans/100+1;
	} else ans=ans/100;
	int ss=ans%60;
	int mm=ans%3600/60;
	int hh=ans/3600;
	printf("%02d:%02d:%02d",hh,mm,ss);
	return 0;
} 
