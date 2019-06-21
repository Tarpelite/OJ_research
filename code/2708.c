#include<stdio.h>
int f(int x);
int main()
{
    int a;
    scanf("%d",&a);
    for(a=a+1;;a++)
    {
        if(f(a))
        break;
    }
    printf("%d",a);
    return 0;
}
int f(int x)
{
    int i;
    for(i=2;;i++)
    {
        if(x%i==0)
            break;
    }
    if(i==x)
        return 1;
    else
        return 0;
}