#include<cstdio>
#include<set>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	set<int> st[55];
	for(int i=1;i<=n;i++){
		int m;
		scanf("%d",&m);
		for(int j=0;j<m;j++){
			int num;
			scanf("%d",&num);
			st[i].insert(num);
		}
	}
	int k;
	scanf("%d",&k);//k¸ö²éÑ¯ 
	for(int i=0;i<k;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		int samenum=0;
		int totalnum=st[y].size();
		for(set<int>::iterator it=st[x].begin();it!=st[x].end();it++){
			if(st[y].find(*it)!=st[y].end()){
				samenum++;
			}else totalnum++;
		}
		float N=samenum*100.0/totalnum;
		//printf("%d %d/n",samenum,totalnum);
		printf("%.1f%%",N);
	}
	return 0;
}
