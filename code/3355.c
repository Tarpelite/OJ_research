#include<stdio.h>
#include<math.h>

#define min(a,b) (a<b?a:b)

typedef long long ll;
int a,b;

int main(){
	scanf("%d%d",&b,&a);
	a=min(a,b-a);

	if(a<0)printf("0");
	else{
		ll ans=1;
		double tmp=pow(b,a);
		if(tmp>1e17)while(1);

		for(int i=b;i>b-a;i--)
			ans*=i;
		for(int i=a;i>0;i--)
			ans/=i;
		printf("%lld",ans);
	}

	return 0;
}