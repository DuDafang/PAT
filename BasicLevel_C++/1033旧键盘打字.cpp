#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string s1,s2;
	cin.getline(s1,100);
	cin>>s2;
	if(s1.find('+')==string::npos){
		for(int i=0;i<s2.length();i++){
			if(s1.find(toupper(s2[i]))==string::npos)
			cout<<s2[i];
		}
	}else{
		for(int i=0;i<s2.length();i++){
			if(s2[i]>='A'&&s2[i]<='Z')
				continue;
			else{
				if(s1.find(toupper(s2[i]))==string::npos)
				cout<<s2[i];
			}
		}
	}
	return 0;
}
