#include<iostream>
using namespace std;
//�����鷳�ڣ�abcȡֵ��ΧΪ[-2^63,2^63]
//longlong��ȡֵ��Χ��[-2^63,2^63] ,��������ֱ����ӿ��ܻ����
//�ڼ�������ԭ����ָ���������������֮�͵��ڸ�����������������֮�͵�����������ô������� 
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		long long a,b,c;
		cin>>a>>b>>c;
		long long res=a+b;
		bool flag;//��bool���״̬�����ⳣ�� 
		if(a>0&&b>0&&res<0)flag=true;//�����Ϊ��
		else if(a<0&&b<0&&res>=0)flag=false;//�����,��Ϊ�������Ȼa+b<c 
		else if(res>c)flag=true;
		else flag=false;
		if(flag==true) printf("Case #%d: true\n",i+1);
		if(flag==false) printf("Case #%d: false\n",i+1);
	} 
	return 0;
}
