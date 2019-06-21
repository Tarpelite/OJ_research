#include <stdio.h>
#include <math.h>
int zhishu(int n)
{
    int i,n1=(int )(sqrt(n)+1 );
    for ( i=2;i<n1;i++)
    {
        if ( n%i==0)
            return 0;
    }
    return 1;
}
int main ()
{
    int n;
    scanf("%d",&n);
    while ( !zhishu(++n));
    printf("%d\n",n);
    return 0;

}