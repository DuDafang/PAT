//��������Ľⷨgithub.com/liuchuo 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int>a(n);//��������ϲ����vector 
	for(int i=0;i<n;i++)
		cin>>a[i];
	m%=n;//����m��m�п��ܴ���n�����ƶ���һȦ֮������xλ�� 
	if(m!=0){
		reverse(begin(a),begin(a)+n);//reverse���ڷ�ת�ڡ�first��last����Χ�ڵ�˳�� 
		reverse(begin(a),begin(a)+m);
		reverse(begin(a)+m,begin(a)+n);
	}
	for(int i=0;i<n-1;i++){
		cout<<a[i]<<" ";
	}
	cout<<a[n-1];
	return 0;
} 
