#include<iostream>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		if(b!=1&&b!=0)
		printf("%d %d ",a*b,b-1);
		if(b==1)
		printf("%d %d",a*b,b-1);
		if(a==0&&b==0)
		printf("0 0");
	}
	return 0;
}
