#include<iostream>
#include<queue>
#include<algorithm> 
using namespace std;
int postorder[50];
int inorder[50];
struct node{
	int data;
	node * lchild;
	node * rchild;
};
int n;
node * creat(int postL,int postR,int inL,int inR){
	if(postR<postL) return NULL;
	node * root=new node;
	root->data=postorder[postR];
	int k=0;
	for(int i=inL;i<=inR;i++){
		if(inorder[i]==postorder[postR]){
			k=i;
			break;
		}
	}
	int number=k-inL;
	root->lchild=creat(postL,postL+number-1,inL,k-1);
	root->rchild=creat(postL+number,postR-1,k+1,inR);
	return root;
}
int num=0;
void levelorder(node * root){
	//if(root==NULL) return NULL;
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node * now=q.front();
		cout<<now->data;
		q.pop();
		num++;
		if(num<n) cout<<" ";
		if(now->lchild!=NULL)q.push(now->lchild);
		if(now->rchild!=NULL)q.push(now->rchild);
	}
}
int main(){
	cin>>n;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		postorder[i]=x;
	}
	for(int i=0;i<n;i++){
		cin>>x;
		inorder[i]=x;
	}
	node * root=creat(0,n-1,0,n-1);
	levelorder(root);
	return 0;
}
