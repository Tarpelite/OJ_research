#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
    int a=n+1;
    while(n!=0)
    {
        int i=2;
        while(a%i!=0)
            i++;
        if(i!=a)
        {
            a++;
            continue;
        }
        else
        {
            printf("%d\n",a);
            break;
        }
    }}
    return 0;
}