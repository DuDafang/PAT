#include<iostream>
using namespace std;
int main(){
	int n,m;
	int a,b;
	int a1[10]={0};
	int a2[10]={0};
	int a3[10]={0};
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		b=a1[a];
	} 
	cin>>m;
	for(int i=10;i>0;i--){
		cin>>a>>b;
		b=a2[a];
	} 
	int count=0;
	for(int i=0;i<10;i++){
		a3[i]=a1[i]+a2[i];
		if(a3[i]!=0) count++;
	}
	cout<<count;
	for(int i=0;i<10;i++){
		if(a3[i]!=0){
			cout<<" "<<a3[i];
		}
	}
	return 0;
}
