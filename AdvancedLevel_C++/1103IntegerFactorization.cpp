#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;
int n,k,p;
vector<int> fac;//Ԥ�������в�����n��p�η�
vector<int> ans;//������ŵĵײ�����
vector<int> temp;//��ŵ�ǰѡ�е����� 
int maxfacsum=-1;
void dfs(int index,int nowK,int sum,int facsum)//index��ǰ�������fac����λ
{
	if(sum==n&&nowK==k){
		if(facsum>maxfacsum){
			ans=temp;
			maxfacsum=facsum;
		}
		return;
	}
	if(sum>n||nowK>k) return;//��������²����ҵ��𰸵ģ�ֱ�ӷ���
	if(index>=1){//index����Ϊ����
		temp.push_back(index);
		dfs(index,nowK+1,sum+fac[index],facsum+index);
		temp.pop_back();//ѡ�ķ�֧�����󣬰Ѹղż������pop��
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
		temp=pow(i,p);//!!!!!!!!!!!!!!!!!!����Ҫ�������ٳ˷� 
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
