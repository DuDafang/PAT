#include<iostream>
using namespace std;
int main(){
	int m,n;
	cin>>m;
	int x;
	int hashtable[10010]={0};
	for(int i=0;i<m;i++){
		cin>>x;
		hashtable[x]++;
	}
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		cout<<hashtable[x];
		if(i!=n-1)cout<<" ";
	}
	return 0;
}
