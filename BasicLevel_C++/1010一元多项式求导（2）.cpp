#include<iostream>//柳神的 
using namespace std;
int main(){
	int a,b,flag=0;//flag标记 
	while(cin>>a>>b){
		if(b!=0){//b!=0是为了避免在输出最后加上0 0 
			if(flag==1) cout<<" ";//用flag标记的方法，使最后一个输出后面无空格 
			cout<<a*b<<" "<<b-1; 
			flag=1; 
		}
	} 
	if(flag==0) cout<<"0 0";
	return 0;
} 
