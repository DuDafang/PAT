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
//maxnum��ʾ�����ȵ�Ҷ�ڵ���� 
//һ�����ĸ�������Ϊ�� 
void dfs(int index,int depth){//���ڱ����е�dfs��
//����ֻ��Ҫ���õ�ǰ���ʽ��index�뵱ǰ���depth 
//�ݹ�߽磬��ǰ���ĺ��ӽ����Ϊ0ʱ������Ҷ�ӽ�㣬�жϵ�ǰ����Ƿ����������maxdepth
//if���ڣ�����maxdepth������maxnum����Ϊ1,
//if���ڣ�maxnum++ 
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
