#include<stdio.h>
int main()
{
	int m,n,x,i;
	long long int a=1,b=1,c=1;
	scanf("%d%d",&m,&n);
	if(m==0) printf("0");
	else
            {
		for(i=1;i<=m;i++) a*=i;
		for(i=1;i<=n;i++) b*=i;
		if((m-n)==0) c=1;
		else
		{
			for(i=1;i<=(m-n);i++) c*=i;
		}
		x=a/(b*c);
		printf("%d",x);
		return 0;
	}
}