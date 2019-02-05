#include<iostream>
using namespace std;
int main(){
	long long a,da,b,db;
	scanf("%lld%lld%lld%lld",&a,&da,&b,&db);
	long long pa=0,pb=0;
	while(a!=0){
		if(a%10==da) pa=pa*10+da;//如果当前位为da，给pa增加一位da
		a=a/10; 
	}
	while(b!=0){
		if(b%10==db) pb=pb*10+db;//某数%10，得个位数；某数/10，减少一位 
		b=b/10;
	}
	printf("%lld",pa+pb);
	return 0;
}
