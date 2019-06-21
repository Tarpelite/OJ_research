#include<stdio.h>
int prime(int);
int main()
{
    int n,j;
    scanf("%d",&n);
    for(j=n+1;j<=200000;j++)
    {
        if(prime(j)==1)
        {
            printf("%d",j);
            break;
        }
    }
    return 0;
}
int prime(int x)
{
   int i=2;
   int flag=1;
   for(i=2;i<=x/2;i++)
   {
       if(x%i==0)
        flag=0;
   }
   return flag;

}