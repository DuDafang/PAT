#include<iostream>
using namespace std;
int main(){
	int a,b;
	int f=0;
	while(cin>>a>>b){
		if(f!=0&&b!=0)cout<<" ";
		if(a==0)cout<<"0 0";
		if(a!=0&&b!=0)cout<<a*b<<" "<<b-1;
		if(f==0&&a!=0&&b==0)cout<<"0 0";
		f=1;
	} 
	return 0;
} 
//���д�ĺ��ң�д�˺ܾ����ڸ������...������������д�ļ����� 
