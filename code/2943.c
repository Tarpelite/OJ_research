#include<stdio.h>
#include<math.h>
int ifprime(int n);
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n+1;ifprime(i)==0;i++)
        ;
    printf("%d",i);
    return 0;
}
int ifprime(int n)
{
   int i;
   for(i=2;i<n&&n%i!=0;)
   {
       i++;
   }
  return (i<n?0:1);
}