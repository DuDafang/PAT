#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	char mp[5]={'S','H','C','D','J'};
	int start[55],end[55],next[55];//�ֱ������洢ִ�в���ǰ��ִ�в����������
	//��ÿһ�εĲ����п��԰�����start�е�ÿһ��λ�õ��ƺŴ�ŵ�����end�Ķ�Ӧת��λ���� 
	for(int i=1;i<=54;i++){//���еĶ���1��ʼ����Ϊ��֮�������ɫ 
		start[i]=i;//��ʼ���Ƶı�� 
	}
	for(int i=1;i<=54;i++){
		cin>>next[i];//����ÿ��λ���ϵ����ڲ������λ�� 
	}
	for(int step=0;step<n;step++){
		for(int i=1;i<=54;i++){
			end[next[i]]=start[i];//�ѵ�i��λ�õ��Ƶı�Ŵ��next[i]����̫�ö����Լ�����ͼ�������� 
		}
		for(int i=1;i<=54;i++){
			start[i]=end[i]; 
		}
	} 
	for(int i=1;i<=54;i++){
		if(i!=1) printf(" ");
		start[i]--;//ΪʲôҪ-1������ĳ��Ϊ13,13/13=1��=0��������һ����ɫ�� 
		printf("%c%d",mp[start[i]/13],start[i]%13+1);//����%13+1���ǻָ������-1 
	}
	return 0; 
} 
