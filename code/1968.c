#include<stdio.h>
int main()
{
    int n,a,i;
    scanf("%d",&n);
        a=n;
        do{
        a=a+1;
        for(i=2;i<a;i++)
        if(a%i==0)
        break;
        if(i==a)
        printf("%d",a);
        }
        while(i<a);
        return 0;
}