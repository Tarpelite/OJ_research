#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main(int argc, char* argv[])
{
int isum=1;
int m,n,k;


scanf("%d",&m);

scanf("%d",&n);

for(k=1;k<=n;k++)
{
isum=(isum*(m-n+k))/k;
}

printf("%d",isum);

return 0;
}