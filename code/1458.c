#include <stdio.h>
#include <math.h>
int zs(int x)
{
    int i,k;
    k=(int)sqrt((double)x);
    if(x==1) return 0;
    for(i=2;i<=k;i++)
        if(x%i==0)
        return 0;

    return 1;

}
int main()
{
    int a;
    scanf("%d",&a);
    int x;
    for(x=a+1;;x++){
        if(zs(x))
            break;
    }
    printf("%d",x);
    return 0;
}