#include<stdio.h>
int f(int x){
int i;
for(i=2;i<=x-1;i++)
{
    if(x%i==0){break;}
}
if(i==x)
    return x;
else
    return 0;
}
int main()
{
    int a;
     scanf("%d",&a);
     int b;
     for(b=1;f(a+b)!=a+b;b++){}
     printf("%d",a+b);

}