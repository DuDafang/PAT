#include<iostream>
#include<queue>
using namespace std;
int n;
char a,b;
queue<int> q;
struct node{
	int data;
	int lchild;
	int rchild;
}Node[20];
bool isroot[20]={false};
int searchRoot(){
	for(int i=0;i<n;i++){
		if(isroot[i]==false){
			return i;
		}
	}
}
int num=0;
void inorder(int root){
	if(root==-1) return;
	inorder(Node[root].rchild);
	num++;
	cout<<Node[root].data;
	if(num<n) cout<<" ";
	inorder(Node[root].lchild);
	
}
int h=0;
void levelorder(int root){
	q.push(root);
	while(!q.empty()){
		int now=q.front();
		q.pop();
		h++;
		cout<<now;
		if(h<n)cout<<" ";
		if(Node[now].rchild!=-1) q.push(Node[now].rchild);
		if(Node[now].lchild!=-1) q.push(Node[now].lchild);
	}
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		Node[i].data=i;
		cin>>a>>b;
		if(a>='0'&&a<='9'){
			Node[i].lchild=(a-'0');
			isroot[a-'0']=true;
		}else Node[i].lchild=-1;
		if(b>='0'&&b<='9'){
			Node[i].rchild=(b-'0');
			isroot[b-'0']=true;
		}else Node[i].rchild=-1;
	}
	/*for(int i=0;i<n;i++){
		//cout<<Node[i].lchild<<" "<<Node[i].data<<" "<<Node[i].rchild<<endl;
		cout<<isroot[i];
	}*/
	int root=searchRoot();
	///cout<<root<<endl;
	levelorder(root);
	cout<<endl;
	inorder(root);
	return 0;
}
