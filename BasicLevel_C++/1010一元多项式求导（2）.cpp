#include<iostream>//����� 
using namespace std;
int main(){
	int a,b,flag=0;//flag��� 
	while(cin>>a>>b){
		if(b!=0){//b!=0��Ϊ�˱��������������0 0 
			if(flag==1) cout<<" ";//��flag��ǵķ�����ʹ���һ����������޿ո� 
			cout<<a*b<<" "<<b-1; 
			flag=1; 
		}
	} 
	if(flag==0) cout<<"0 0";
	return 0;
} 
