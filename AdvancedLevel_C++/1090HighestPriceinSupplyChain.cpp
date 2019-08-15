#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;
int n;
double p,r;
int x;
int root;
vector<int> v[100010];
int maxnum=0,maxdepth=0;//???
//maxnum表示最大深度的叶节点个数 
//一棵树的根结点深度为？ 
void dfs(int index,int depth){//对于本题中的dfs，
//参数只需要设置当前访问结点index与当前深度depth 
//递归边界，当前结点的孩子结点数为0时，到达叶子结点，判断当前深度是否大于最大深度maxdepth
//if大于，更新maxdepth，并将maxnum更新为1,
//if等于，maxnum++ 
	if(v[index].size()==0){
		if(maxdepth==depth)
			maxnum++;
		if(maxdepth<depth){
			maxnum=1;
			maxdepth=depth;
		} 
		//return;
	}
	for(int i=0;i<v[index].size();i++){
		dfs(v[index][i],depth+1);
	}
}
int main(){
	scanf("%d %lf %lf",&n,&p,&r);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		if(x==-1) root=i;
		else{
			v[x].push_back(i);
		}
	}
	dfs(root,0);
	printf("%.2f %d",p*pow(1+r/100,maxdepth),maxnum);
	return 0;
}
