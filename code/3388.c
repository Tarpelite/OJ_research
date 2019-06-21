#include<stdio.h>
int main()
{
    int m,n,i;
    scanf("%d",&m);
    i = m + 1;
    while(D(i) == 0) //D(i) = 0不是质数 D(i) = 1是质数
    {
        i++;
    }
    printf("%d",i);
    return 0;
}
int D(int x)
{
    int j = 2;
    if ( (x<1)||(x==4) )
        return 0;
    for( j ; j * j <= x ; j++)
    {
        if ( x % j == 0 )
        {
            return 0;
        }
    }
    return 1;
}