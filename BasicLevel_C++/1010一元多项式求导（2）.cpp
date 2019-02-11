#include<iostream>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		int f=a*b;
		int g=b-1;
		if(g==0) printf("0 0");
		else printf("%d %d",f,g);
		if(b!=0||b!=1) printf(" ");
	}
	return 0;
}
