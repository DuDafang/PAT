#include<iostream>
#include<string>
using namespace std;
void hashfun(string s,int hash[]){
	int x;
	for(int i=0;i<s.length();i++){
		if(s[i]>='0'&&s[i]<='9'){//֮ǰһֱ���������Ե����ȥ������Ϊתhash�����ص� 
			x=s[i]-'0';
			hash[x]++;
		}
		if(s[i]>='A'&&s[i]<='Z'){
			x=s[i]-'A'+10;
			hash[x]++;
		}
		if(s[i]>='a'&&s[i]<='z'){
			x=s[i]-'a'+36;//���Ե�4����ȥ����Ϊתhashû�����ִ�Сд 
			hash[x]++;
		}
	}
}
void hashfun2(string s,int hash[]){
	int x;
	for(int i=0;i<s.length();i++){
		if(s[i]>='0'&&s[i]<='9'){
			x=s[i]-'0';
			hash[x]--;
		}
		if(s[i]>='A'&&s[i]<='Z'){
			x=s[i]-'A'+10;
			hash[x]--;
		}
		if(s[i]>='a'&&s[i]<='z'){
			x=s[i]-'a'+36;
			hash[x]--;
		}
	}
}
int main(){
	string s1;
	getline(cin,s1);
	string s2;
	getline(cin,s2);
	int hash[200]={0};
	hashfun(s1,hash);
	hashfun2(s2,hash);
	int count=0;
	int count2=0; 
	for(int i=0;i<200;i++){
		//cout<<hash[i];
		if(hash[i]<0){
			count=count-(hash[i]);
		}
		if(hash[i]>0){
			count2=count2+hash[i];
		}
	}
	if(count>0)cout<<"No"<<" "<<count;
	else cout<<"Yes"<<" "<<count2;
	return 0;
}
