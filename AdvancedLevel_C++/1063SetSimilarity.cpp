#include<cstdio>
#include<set>
using namespace std;
set<int> st[51];
int main(){
	int n;
	scanf("%d",&n);
	int x;
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		for(int j=0;j<x;j++){
			int num;
			num=scanf("%d",&num);
			st[i].insert(num);
		}
	}
	int m;
	int y1,y2;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d %d",&y1,&y2);
		int totlenum=st[y2].size();//两个变量分别表示不同元素的个数（并集，
		//以及相同元素的个数（交集  
		int samenum=0;
		for(set<int>::iterator it=st[y1].begin();it!=st[y1].end();it++){
			if(st[y2].find(*it)!=st[y2].end()){
				totlenum++;
			}
			else samenum++;
		}
		printf("%.1lf%%\n",samenum*100.0/totlenum);
	}
	return 0;
}
