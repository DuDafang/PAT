#include<iostream>
#include<string>
//#include<string.h>???
using namespace std;
int main(){
	string a,b;
	int da,db; 
	int newa=0,newb=0;
	cin>>a>>da>>b>>db;
	for(int i=0;i<a.size();i++){//����a��ÿһλ����da�Ƚ� //������strlen��strlen��\0��������ab����\0 
		if(a[i]-'0'==da) newa=newa*10+da;//���ص� newaҪ�Լ���10 
	}
	for(int i=0;i<b.size();i++){//����a��ÿһλ����da�Ƚ� 
		if(b[i]-'0'==db) newb=newb*10+db;
	}
	cout<<newa+newb;
	return 0;
} 
