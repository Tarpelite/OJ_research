#include <stdio.h>
#include <stdlib.h>
int sushu(int a)
{
    int sum=0,i;
    for(i=2;i<a;i++)
    {
        if(a%i==0){sum++;}
    }return sum;
}
int main()
{
    int a,j,b;
    scanf("%d",&a);
    for(j=a+1;;j++)
    {
        b=sushu(j);
        if(b==0)
            break;
    }
    printf("%d",j);
    return 0;
}