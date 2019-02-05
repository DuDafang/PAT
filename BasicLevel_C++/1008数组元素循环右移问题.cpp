#include<iostream>
using namespace std;
int main(){
	int n,m;
	int a[101];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		int k=a[n-1];
		for(int j=n-1;j>0;j--){
			a[j]=a[j-1];
		}
		a[0]=k;
	}
	for(int i=0;i<n-1;i++){
		cout<<a[i]<<" ";
	}
	cout<<a[n-1];
	return 0;
}
