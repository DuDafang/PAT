#include<iostream>//来自柳神github.com/liuchuo/PAT 
using namespace std;
int main(){
	int n;
	cin>>n;
	int start[55],end[55],scan[55];
	for(int i=1;i<55;i++){
		scanf("%d",&scan[i]);//读取改了以后的顺序 
		end[i]=i;//初始化end 
	}
	for(int i=0;i<n;i++){
		for(int j=1;j<55;j++){
			start[j]=end[j];//
		}
		for(int k=1;k<55;k++){
			end[scan[k]]=start[k];
		}
	}
	char c[5]={'S','H','C','D','J'};
	for(int i=1;i<55;i++){
		end[i]--;
		printf("%c%d",c[end[i]/13],end[i]%13+1);
		if(i!=54) printf(" ");
	} 
	return 0;
} 
