#include<stdio.h>
int main()
{
	int m,n,ans,o,i;
	long long int m1=1,n1=1,o1=1;
	scanf("%d%d",&m,&n);
	o=m-n;
	if(m==0) printf("0");
	else{
		for(i=1;i<=m;i++) m1*=i;
		for(i=1;i<=n;i++) n1*=i;
		if(o==0) o1=1;
		else{
			for(i=1;i<=o;i++) o1*=i;
		}
		ans=m1/(n1*o1);
		printf("%d",ans);
		return 0;
	}
}