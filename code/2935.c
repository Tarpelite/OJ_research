#include<stdio.h>
#include<math.h>
int f(int m){
int i;
for(i=m/2;i>=1;i--)
{
    if(m%i==0)
        break;
}
if(i==1)
    return 1;
else
    return 0;
}
int main()
{
    int n,i,m;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(f(i)==1)
        {
            printf("%d",i);
            return 0;
        }
    }
}