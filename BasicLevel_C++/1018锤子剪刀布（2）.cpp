#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	char c1,c2;
	int a_timewin[3]={0};
	int b_timewin[3]={0};
	int a[3]={0};
	int b[3]={0};
	for(int i=0;i<n;i++){
		cin>>c1>>c2;//注意！！！！！！！cin读取时一定要cin>>x>>y才行 
		if(c1=='C'&&c2=='C'){
			a_timewin[2]++;
			b_timewin[2]++;
		}//012胜负平 
		if(c1=='C'&&c2=='B'){
			b_timewin[0]++;
			a_timewin[1]++;
			b[0]++;//012BCJ
		}
		if(c1=='C'&&c2=='J'){
			a_timewin[0]++;
			b_timewin[1]++;
			a[1]++; 
		}
		if(c1=='B'&&c2=='B'){
			a_timewin[2]++;
			b_timewin[2]++;
		}
		if(c1=='B'&&c2=='C'){
			a_timewin[0]++;
			b_timewin[1]++;
			a[0]++;
		}
		if(c1=='B'&&c2=='J'){
			b_timewin[0]++;
			a_timewin[1]++;
			b[2]++;
		}
		if(c1=='J'&&c2=='J'){
			a_timewin[2]++;
			b_timewin[2]++;
		}
		if(c1=='J'&&c2=='B'){
			a_timewin[0]++;
			b_timewin[1]++;
			a[2]++;
		}
		if(c1=='J'&&c2=='C'){
			b_timewin[0]++;
			a_timewin[1]++;
			b[1]++;
		}
	};
	printf("%d %d %d\n",a_timewin[0],a_timewin[2],a_timewin[1]);
	printf("%d %d %d\n",b_timewin[0],b_timewin[2],b_timewin[1]);
	int m=0,k=0;
	int mi=0,ki=0;//这块搞死我了，debug半天 
	for(int j=0;j<3;j++){
		if(a[j]>m){
			m=a[j];
			mi=j;//就是这里，不能直接让m=i，然后h【m】输出 
		}
	}
	for(int i=0;i<3;i++){
		if(b[i]>k){
			k=b[i];
			ki=i;
		}
	}
	int h[3]={'B','C','J'};
	printf("%c %c",h[mi],h[ki]);//本来是段错误，将%s换成%c，段错误提示消失 
	return 0;
}
