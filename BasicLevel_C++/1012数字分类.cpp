#include<iostream>
using namespace std;
int main() {
	int n;
	scanf("%d",&n);
	int x;
	float count=0.0;//float����Ϊ������Ҫ��С�� 
	int aa2[10000]={0};//Ϊ�˴ﵽ������ӵ�Ŀ�ģ��ѷ��������������������Ȼ���ж��ǵڼ������֣�ִ����Ӧ�Ӽ� 
	int read=0; //������ӽ׶εļ�����~ 
	int max=0;
	int a1=0,a2=0,a3=0,a4=0,a5=0;
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		if(x%5==0&&x%2==0) a1=a1+x;
		if(x%5==1){
			aa2[read]=x;//�������������������飬Ϊ��֮��Ľ������ 
			read++;
		}
		if(x%5==2) a3++;
		if(x%5==3){
			count++;
			a4=a4+x;
		}
		if(x%5==4){
			if(x>max) max=x;
		}
	}
	for(int i=0;i<n;i++){//������ӽ׶� 
		if(i%2==0) a2=a2+aa2[i];
		else a2=a2-aa2[i]; 
	}  
	float aa4=a4/count;//Ϊ��a4��ʾС�������측���� 
	if(a1!=0) printf("%d ",a1);
	else printf("N ");
	if(read!=0) printf("%d ",a2);//֮�������ж�read������Ϊa2���ܽ������֮��Ϊ0�����ܺ�������������ɴ˿���pat�ܶ���Ե㶼�����⣬�������׺��� 
	else printf("N ");
	if(a3!=0) printf("%d ",a3);
	else printf("N ");
	if(a4!=0) printf("%.1f ",aa4);
	else printf("N ");
	if(max!=0) printf("%d",max);
	else printf("N");
	return 0;
}
