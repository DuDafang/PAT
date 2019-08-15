#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;
int n,m,x;
double p,r;
struct node{
	double data;//货物量
	vector<int> child;//指针域 
}Node[100010];
double total=0;
void dfs(int index,int depth){
	if(Node[index].child.size()==0){
		total+=p*pow(1+r/100,depth)*Node[index].data;
		return;
	}
	for(int i=0;i<Node[index].child.size();i++){
		dfs(Node[index].child[i],depth+1);
	}
}
int main(){
	scanf("%d%lf%lf",&n,&p,&r);
	for(int i=0;i<n;i++){
		scanf("%d",&m);
		if(m==0){
			scanf("%lf",&Node[i].data);
		}else{
			for(int j=0;j<m;j++){
				scanf("%d",&x);
				Node[i].child.push_back(x);
			}
		}
		
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<Node[i].child.size();j++){
			scanf("%d",Node[i].child[j]);
		}
	}
	//dfs(0,0);
	//scanf("%.1f",total);
	return 0;
} 
