#include<stdio.h>
int main()
{
	int m,n,ans,i,j;
	long long int m1=1,n1=1,j1=1;
	scanf("%d%d",&m,&n);
	j=m-n;
	if(m==0)
        printf("0");
	else{
		for(i=1;i<=m;i++) 
            m1*=i;
		for(i=1;i<=n;i++) 
            n1*=i;
		if(j==0) 
            j1=1;
		else{
			for(i=1;i<=j;i++) j1*=i;
		}
		ans=m1/(n1*j1);
		printf("%d",ans);
		return 0;
	}
}