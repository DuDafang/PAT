#include<stack>
#include<iostream>
using namespace std;
stack<int> st;
int a[1010];
int m,n,t;
int main(){
	cin>>m>>n>>t;
	int now;
	for(int i=1;i<=t;i++){
		while(!st.empty()){
			st.pop();//不为空，出队，直到清空 
		}
		for(int i=1;i<=n;i++){
			cin>>a[i];//读入测试组数据，存入数组中 
		}
		int current=1;//表示出栈序列当前等待出栈的元素位置标记 
		bool flag=true;
		for(int i=1;i<=n;i++){
			st.push(i);
			if(st.size()>m){//如果此时栈中的元素个数大于m，序列非法 
				flag=false;
				break; 
			}
			while(!st.empty()&&st.top()==a[current]){
				st.pop();
				current++;
			} 
		}
		if(st.empty()==true&&flag==true){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}
