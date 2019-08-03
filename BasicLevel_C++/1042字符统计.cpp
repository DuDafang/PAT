#include<iostream>
#include<string>
using namespace std;
void hashfun(string s,int hashtable[]){
	int x;
	cout<<s.length();
	for(int i=0;i<s.length();i++){
		if(s[i]>='a'&&s[i]<='z'){
			x=s[i]-'a';
			cout<<x<<" ";
			hashtable[x]++;
		}
		else if(s[i]>='A'&&s[i]<='Z'){
			x=s[i]-'A';
			cout<<x<<" ";
			hashtable[x]++;
		}
	}
}
int main(){
	string s;
	int hashtable[30]={0};
	cin>>s;
	hashfun(s,hashtable);
	int maxn=0;
	char a;
	for(int i=0;i<30;i++){
		cout<<hashtable[i]<<" ";
		if(hashtable[i]>hashtable[maxn]){
			maxn=i;
		}
	}
	a='a'+maxn;
	cout<<a<<" "<<hashtable[maxn];
	return 0;
}
