#include<stdio.h>
int fun(int a,int b)
{
    int i;
    int sum=1;

    if(b<a-b)
        b=a-b;

    for(i=b+1;i<=a;i++)
       sum*=i;

    for(i=1;i<=a-b;i++)
        sum/=i;

      return sum;

}
int main()
{
    int m,n,ans;
    scanf("%d%d",&m,&n);
    ans=fun(m,n);
    printf("%d",ans);
    return 0;


}