#include<iostream>
using namespace std;
int change(char c){//BΪ0��CΪ1��JΪ2��ǡ����ѭ�����˳�����ֵ��������Ȼ���������� 
	if(c=='B') return 0;
	if(c=='C') return 1;
	if(c=='J') return 2;
}
int main(){
	char mp[3]={'B','C','J'};
	int n;
	cin>>n;
	int timesa[3]={0},timesb[3]={0};//�ֱ��¼���ҵ�ʤ��ƽ������
	int handa[3]={0},handb[3]={0};//��BCJ˳��ֱ��¼����3�����ƵĻ�ʤ����
	char c1,c2;
	int k1,k2;//ת��֮��� 
	for(int i=0;i<n;i++){
		cin>>c1>>c2;
		k1=change(c1);
		k2=change(c2);
		if((k1+1)%3==k2){
			timesa[0]++;
			timesb[2]++;
			handa[k1]++; 
		}
		else if(k1==k2){
			timesa[1]++;
			timesb[1]++;
		}
		else{
			timesa[2]++;
			timesb[0]++;
			handb[k2]++;
		}
	}
	printf("%d %d %d\n",timesa[0],timesa[1],timesa[2]);
	printf("%d %d %d\n",timesb[0],timesb[1],timesb[2]);
	int id1=0,id2=0;
	for(int i=0;i<3;i++){
		if(handa[i]>handa[id1]) id1=i;//�������������ֵ�����Ϊ֮ǰ0.1.2�ֱ��Ӧbcj 
		if(handb[i]>handb[id2]) id2=i;
	}
	printf("%c %c\n",mp[id1],mp[id2]);//ת���bcj 
	return 0;
} 
