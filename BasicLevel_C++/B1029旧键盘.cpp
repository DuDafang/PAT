#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char str1[100],str2[100];
	bool hashtable[128]={false};//��hashtable����ַ��Ƿ��Ѿ������ 
	cin.getline(str1,100);//PAT�н�ֹgetline����ȡһ����cin.getline��ʹ��ʱ��Ҫ��ͷ�ļ�iostream 
	cin.getline(str2,100);
	int len1=strlen(str1);
	int len2=strlen(str2);
	for(int i=0;i<len1;i++){//ö�ٵ�һ���ַ����е�ÿһ�� 
		int j;
		char c1,c2;
		for(j=0;j<len2;j++){//ö�ٵڶ����ַ����е�ÿһ�� 
			c1=str1[i];
			c2=str2[j];
			if(c1>='a'&&c1<='z')c1-=32;//��Сдת�� 
			if(c2>='a'&&c2<='z')c2-=32;
			if(c1==c2) break;//c1�ڵڶ����ַ��г��֣������� 
		}
		if(j==len2&&hashtable[c1]==false){//c1δ�ڵڶ����ַ����г��֣��Ҵ�δ����� 
			cout<<c1;
		}
		hashtable[c1]=true;
	}
	return 0;
}
