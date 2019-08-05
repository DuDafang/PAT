#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int getid(string name){
	int id=0;
	for(int i=0;i<3;i++){
		id=id*26+(name[i]-'A');
	}
	id=id*10+(name[3]-'0');
	return id;
}

int main(){
	const int M=26*26*26*10+1;
	vector<int> select[M];//不知道和oj的什么冲突了，换到内部定义可行，全局定义不可行 
	int n,k=0;
	cin>>n>>k;
	string stname;
	for(int i=0;i<k;i++){
		int course,x;
		cin>>course>>x;
		for(int j=0;j<x;j++){
			cin>>stname;
			int id=getid(stname);
			select[id].push_back(course);
		}
	}
	for(int i=0;i<n;i++){
		cin>>stname;
		int id=getid(stname);
		sort(select[id].begin(),select[id].end());
		cout<<stname<<" "<<select[id].size();
		for(int j=0;j<select[id].size();j++){
			cout<<" "<<select[id][j];
		}
		cout<<endl;
	}
	
	return 0;
} 
