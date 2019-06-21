#include <stdio.h>

int main(int argc, char* argv[])
{
int i=1;
int m,n,k;
scanf("%d%d",&m,&n);
for(k=1;k<=n;k++)
i=(i*(m-n+k))/k;
printf("%d",i);
return 0;
}