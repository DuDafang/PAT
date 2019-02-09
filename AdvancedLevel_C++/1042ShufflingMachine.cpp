#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	char mp[5]={'S','H','C','D','J'};
	int start[55],end[55],next[55];//分别用来存储执行操作前和执行操作后的牌序
	//在每一次的操作中可以把数组start中的每一个位置的牌号存放到数组end的对应转换位置中 
	for(int i=1;i<=54;i++){//所有的都从1开始，是为了之后输出花色 
		start[i]=i;//初始化牌的编号 
	}
	for(int i=1;i<=54;i++){
		cin>>next[i];//输入每个位置上的牌在操作后的位置 
	}
	for(int step=0;step<n;step++){
		for(int i=1;i<=54;i++){
			end[next[i]]=start[i];//把第i个位置的牌的编号存进next[i]，不太好懂，自己画个图就明白了 
		}
		for(int i=1;i<=54;i++){
			start[i]=end[i]; 
		}
	} 
	for(int i=1;i<=54;i++){
		if(i!=1) printf(" ");
		start[i]--;//为什么要-1，假设某号为13,13/13=1！=0，就是下一个花色了 
		printf("%c%d",mp[start[i]/13],start[i]%13+1);//这里%13+1就是恢复上面的-1 
	}
	return 0; 
} 
