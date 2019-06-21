#include<stdio.h>

int combnum(int m,int n)
{
    if(n == 1)
        return m;
    if(n == m)
        return 1;
    return combnum(m-1,n)+combnum(m-1,n-1);
}

int main()
{
    int m,n,result;

    scanf("%d %d",&m,&n);

    result=combnum(m,n);

    printf("%d",result);

}