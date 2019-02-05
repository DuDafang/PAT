#include<iostream>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	long long a,b,c;//因为int的取值范围是【-2^31,2^31-1】 
	for(int i=1;i<=n;i++){
		scanf("%lld%lld%lld",&a,&b,&c);
		if(a+b>c) printf("Case #%d: true\n",i);
		else printf("Case #%d: false\n",i);
	}
	return 0;
}
