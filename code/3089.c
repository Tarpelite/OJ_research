#include <stdio.h>

int main()
{
	int m,n,a=1,b=1,c=1,i;
	scanf("%d%d",&m,&n);
	if (n>m/2) n=m-n;
	if(n>m)
		printf("%d",1);
	else
	{for(i=0;i<=n-1;i++)
	  a*=(m-i);
	  for (i=1;i<=n;i++)
        b*=i;
      c=a/b;
      printf("%d",c);

	}
	return 0;
}