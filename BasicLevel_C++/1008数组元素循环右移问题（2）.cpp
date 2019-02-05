//这是柳神的解法github.com/liuchuo 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int>a(n);//柳神好像很喜欢用vector 
	for(int i=0;i<n;i++)
		cin>>a[i];
	m%=n;//修正m，m有可能大于n，即移动了一圈之后又移x位； 
	if(m!=0){
		reverse(begin(a),begin(a)+n);//reverse用于反转在【first，last）范围内的顺序 
		reverse(begin(a),begin(a)+m);
		reverse(begin(a)+m,begin(a)+n);
	}
	for(int i=0;i<n-1;i++){
		cout<<a[i]<<" ";
	}
	cout<<a[n-1];
	return 0;
} 
