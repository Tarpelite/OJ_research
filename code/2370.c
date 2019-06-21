#include<stdio.h>
int main()
{
	int i,m,n;
	double jg;
	scanf("%d%d",&m,&n);
	if(m==0||n==0){
		printf("0");
	}
	else if(m<=n){
		printf("1");
	}
	else{
		jg=m-n+1;
		for(i=2;i<=n;i++){
			jg*=((double)m-n+i)/i;
		}
		printf("%d",(int)jg);
	}
	return 0;
}