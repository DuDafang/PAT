#include<iostream>
#include<string>
//#include<string.h>???
using namespace std;
int main(){
	string a,b;
	int da,db; 
	int newa=0,newb=0;
	cin>>a>>da>>b>>db;
	for(int i=0;i<a.size();i++){//查找a中每一位，与da比较 //不能用strlen，strlen以\0结束，但ab中无\0 
		if(a[i]-'0'==da) newa=newa*10+da;//划重点 newa要自己乘10 
	}
	for(int i=0;i<b.size();i++){//查找a中每一位，与da比较 
		if(b[i]-'0'==db) newb=newb*10+db;
	}
	cout<<newa+newb;
	return 0;
} 
