#include <stdio.h>
#include <stdlib.h>

int is_prime(int a)
{   int i;
    if(a==1) return 0;
    if(a==2) return 1;
    for(i=2;i*i<=a;++i)
           {
               if(a%i==0) return 0;
           }

   return 1;

}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n+1;!is_prime(i);i++);
    printf("%d\n",i);
    return 0;
}