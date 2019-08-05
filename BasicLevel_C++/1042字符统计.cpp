#include<iostream>
#include<string>
using namespace std;
void hashfun(string s,int hashtable[]){
	int x;
	for(int i=0;i<s.length();i++){
		if(s[i]>='a'&&s[i]<='z'){
			x=s[i]-'a';
			hashtable[x]++;
		}
		else if(s[i]>='A'&&s[i]<='Z'){
			x=s[i]-'A';
			hashtable[x]++;
		}
	}
}
int main(){
	string s;
	int hashtable[30]={0};
	getline(cin,s);//此处需要读入一行字符串，并非单独一个字符串，应使用getline 
	hashfun(s,hashtable);
	int maxn=0;
	char a;
	for(int i=0;i<30;i++){
		if(hashtable[i]>hashtable[maxn]){
			maxn=i;
		}
	}
	a='A'+maxn;
	cout<<a<<" "<<hashtable[maxn];
	return 0;
}
