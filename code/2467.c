#include <stdio.h>
int is_prime(int x)
{
    int i;
    for(i=2; i*i<=x; i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;

}
int main()
{
    int n, i, k, a[100005], j, b[100005];
    scanf("%d",&n);
    i=0;
    j=0;
    a[0]=2;
    b[0]=2;
    while(i<=100000)
    {
        k=a[i]+1;
        i++;
        if(is_prime(k)==1)
        {
            j++;
            b[j]=k;
        }
        a[i]=k;
    }
    for(i=0; i<=100000; i++)
    {
        if(b[i]>n)
        {
            printf("%d",b[i]);
            break;
        }
    }
    return 0;
}