#include<stdio.h>
int f(int);
int main()
{
    long int x,i;
    scanf("%ld",&x);
    for(i=x+1;i<=2*x;i++)
    {
        if(f(i)){printf("%ld",i);
        break;}
    }
    return 0;
}
int f(int x){
if(x==1) return 0;
for(int n=2;n*n<=x;n++)
   if(x%n==0)return 0;
return 1;
}