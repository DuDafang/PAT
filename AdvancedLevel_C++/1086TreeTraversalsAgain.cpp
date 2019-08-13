#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std;
int n;
string s;
stack<int> st;
vector<int> inorder;
vector<int> pro;
struct node{
	int data;
	node * lchild;
	node * rchild; 
};
node* creat(int proL,int proR,int inL,int inR){
	if(proL>proR)return NULL;
	node * root=new node;
	root->data=pro[proL];
	int k;
	for(k=inL;k<=inR;k++){
		if(inorder[k]==pro[proL])
		break;
	}
	int num=k-inL;
	root->lchild=creat(proL+1,proL+num,inL,k-1);
	root->rchild=creat(proL+num+1,proR,k+1,inR);
	return root;
}
int m=0; 
void post(node* root){
	if(root==NULL) return;
	post(root->lchild);
	post(root->rchild);
	m++;
	cout<<root->data;
	if(m<n) cout<<" ";
}
int main(){
	cin>>n;
	int m=2*n;
	int x;
	for(int i=0;i<m;i++){
		cin>>s;
		if(s.length()==4){
			cin>>x;
			st.push(x);
			pro.push_back(x);
		}else if(s.length()==3){
			x=st.top();
			inorder.push_back(x);
			st.pop();
		}
	}
	//for(int i=0;i<pro.size();i++){
//		cout<<pro[i];
//	}
	//for(int i=0;i<inorder.size();i++){
//		cout<<inorder[i];
//	}
	node* root=creat(0,n-1,0,n-1);//ÎªÉ¶£¨0£¬pro.size,0,inorder.size)²»ÐÐ 
	post(root);
	return 0;
}
