#include<cstdio>
#include<vector>
using namespace std;
int n,m;
int id,k;
vector<int> Node[110];

int book[110]={0};
void bfs(int index,int level){
	book[level]++;
	for(int i=0;i<Node[index].size();i++){
		bfs(Node[index][i],level+1);
	}
}
int main(){
	int child;
	
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++){
		scanf("%d%d",&id,&k);
		for(int j=0;j<k;j++){
			scanf("%d",&child);
			Node[id].push_back(child);
		}
	}
	bfs(1,1);
	int maxn=0,maxlevel=1;
	for(int i=1;i<110;i++){
		if(book[i]>maxn){
			maxn=hashtable[i];
			maxlevel=i;
		}
	}
	printf("%d %d",maxn,maxlevel);
	return 0;
} 
