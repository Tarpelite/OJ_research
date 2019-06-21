#include <stdio.h>

int main(void)

{
int i, m, n, item=1;

scanf("%d %d",&m,&n);
if (n == 0)
printf("1\n");

else

{

for (i = 1;i <= n;i++)

{

item = item*m / i;

m--;

}

printf("%d\n", item);

}



return 0;

}