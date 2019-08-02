#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char str1[100],str2[100];
	bool hashtable[128]={false};//用hashtable标记字符是否已经被输出 
	cin.getline(str1,100);//PAT中禁止getline，读取一行用cin.getline，使用时需要加头文件iostream 
	cin.getline(str2,100);
	int len1=strlen(str1);
	int len2=strlen(str2);
	for(int i=0;i<len1;i++){//枚举第一个字符串中的每一个 
		int j;
		char c1,c2;
		for(j=0;j<len2;j++){//枚举第二个字符串中的每一个 
			c1=str1[i];
			c2=str2[j];
			if(c1>='a'&&c1<='z')c1-=32;//大小写转换 
			if(c2>='a'&&c2<='z')c2-=32;
			if(c1==c2) break;//c1在第二个字符中出现，则跳出 
		}
		if(j==len2&&hashtable[c1]==false){//c1未在第二个字符串中出现，且从未被输出 
			cout<<c1;
		}
		hashtable[c1]=true;
	}
	return 0;
}
