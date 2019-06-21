#include <stdio.h>
int main (){
int m,n,a=1,b=1;
scanf ("%d %d",&m,&n);
for (int i=m;i>=(m+1-n);i--)
{a *=i;
}
for (int j=n;j>=1;j--)
{b *=j;
}
printf ("%d",a/b);
return 0;
	
}