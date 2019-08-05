#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
	char name[40010][5];
	
bool cmp(int a,int b){
	return strcmp(name[a],name[b])<0;
}
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	vector<char>select[2510];
	//char s;
	//int id;
	int classid;
	int h;
	for(int i=0;i<n;i++){
		scanf("%s %d",name[i],&h);
		for(int j=0;j<h;j++){
			scanf("%d",&classid);
			select[classid].push_back(i);
		}
	}
	for(int i=1;i<=k;i++){
		printf("%d %d\n",i,select[i].size());
		sort(select[i].begin(),select[i].end(),cmp);
		for(int j=0;j<select[i].size();j++){
			printf("%s\n",name[select[i][j]]);
		}
	}
	return 0;
} 
