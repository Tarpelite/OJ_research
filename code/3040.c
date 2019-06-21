#include<stdio.h>
#include<math.h>
int zhi();
int main()
{
    int n;int i;
    scanf("%d",&n);
    i=n+1;
    while (zhi(i)==0) i++;
    printf("%d",i);
    return 0;
}

int zhi(int n)
{
    double s=sqrt((double)n);
    int i;
    for (i=2;i<=(int)s;i++)
    {
        if (n%i==0) return 0;
    }
    return 1;
}