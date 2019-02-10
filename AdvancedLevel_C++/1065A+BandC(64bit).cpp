#include<iostream>
using namespace std;
//本题麻烦在，abc取值范围为[-2^63,2^63]
//longlong的取值范围是[-2^63,2^63] ,两个整数直接相加可能会溢出
//在计算机组成原理中指出，如果两个正数之和等于负数或者是两个负数之和等于正数，那么就是溢出 
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		long long a,b,c;
		cin>>a>>b>>c;
		long long res=a+b;
		bool flag;//用bool标记状态，做题常用 
		if(a>0&&b>0&&res<0)flag=true;//正溢出为正
		else if(a<0&&b<0&&res>=0)flag=false;//负溢出,因为负溢出显然a+b<c 
		else if(res>c)flag=true;
		else flag=false;
		if(flag==true) printf("Case #%d: true\n",i+1);
		if(flag==false) printf("Case #%d: false\n",i+1);
	} 
	return 0;
}
