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
			st.pop();//��Ϊ�գ����ӣ�ֱ����� 
		}
		for(int i=1;i<=n;i++){
			cin>>a[i];//������������ݣ����������� 
		}
		int current=1;//��ʾ��ջ���е�ǰ�ȴ���ջ��Ԫ��λ�ñ�� 
		bool flag=true;
		for(int i=1;i<=n;i++){
			st.push(i);
			if(st.size()>m){//�����ʱջ�е�Ԫ�ظ�������m�����зǷ� 
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
