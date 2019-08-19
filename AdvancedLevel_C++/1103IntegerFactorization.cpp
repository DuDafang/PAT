#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;
int n,k,p;
vector<int> fac;//预处理所有不超过n的p次方
vector<int> ans;//存放最优的底层数列
vector<int> temp;//存放当前选中的数列 
int maxfacsum=-1;
void dfs(int index,int nowK,int sum,int facsum)//index当前处理的是fac几号位
{
	if(sum==n&&nowK==k){
		if(facsum>maxfacsum){
			ans=temp;
			maxfacsum=facsum;
		}
		return;
	}
	if(sum>n||nowK>k) return;//这种情况下不会找到答案的，直接返回
	if(index>=1){//index必须为正数
		temp.push_back(index);
		dfs(index,nowK+1,sum+fac[index],facsum+index);
		temp.pop_back();//选的分支结束后，把刚才加入的数pop掉
		dfs(index-1,nowK,sum,facsum);
	}
}
int main(){
	scanf("%d%d%d",&n,&k,&p);
	int temp=0;
	int i=0; 
	while(temp<=n){
		fac.push_back(temp);
		i++;
		temp=pow(i,p);//!!!!!!!!!!!!!!!!!!这里要先增，再乘方 
	}
	//for(int i=0;i<fac.size();i++)
	//printf("%d",fac[i]);
	dfs(fac.size()-1,0,0,0);
	if(maxfacsum==-1) printf("Impossible\n");
	else{
		printf("%d = %d^%d",n,ans[0],p);
		for(int i=1;i<ans.size();i++){
			printf(" + %d^%d",ans[i],p);
		}
	}
	return 0;
} 
