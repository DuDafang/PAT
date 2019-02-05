#include<iostream>
using namespace std;
int main(){
	int n;
	int a,b,c,d;
	int x=0,y=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c>>d;
		if(a+c==b&&a+c!=d) y++;
		if(a+c==d&&a+c!=b) x++;
	}
	cout<<x<<" "<<y;
	return 0;
}
