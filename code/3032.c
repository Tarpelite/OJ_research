#include<stdio.h>
int fun(int m,int n)
{
    int i;int sum=1;

    if(n<m-n)
        n=m-n;

    for(i=n+1;i<=m;i++)
       sum*=i;

    for(i=1;i<=m-n;i++)
        sum/=i;

      return sum;

}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    if(n==0) {printf("0");}
    else {printf("%d",fun(m,n));}
    return 0;


}