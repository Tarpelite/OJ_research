#include <stdio.h>
#include <stdlib.h>
int is_prime(int x){
if(x==1)
    return 0;
for (int m=2;m*m<=x;m++)
    if(x%m==0)
    return 0;
return 1;
}

int main()
{int n;
scanf("%d",&n);
while(n!=0){
if(is_prime(n+1))

    {printf("%d",n+1);
    break;}
else n++;}
    return 0;
}