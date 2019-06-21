#include<stdio.h>
 #include<math.h>
int a[1024];
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int i=0;
    while(i<n)
    {
        scanf("%d",&a[i]);
        i++;
    }
    int l,r,t=1;
    int N,l1,nf;
    int M,l2,mf;
    int l3,b;
    int min,max;
    while(t<=k)
    {
        b=0;N=0,M=1;
        scanf("%d",&l);
        scanf("%d",&r);
        l1=l;l2=l;l3=l;
        while(l1<=r)
        {
            N=N+a[l1];
            l1++;
        }
        while(l2<=r)
        {
            M=(M*a[l2])%n;
            l2++;
        }
        nf=N%n;
        min=(int)fmin(nf,M);
        max=(int)fmax(nf,M);
        while(min<=max)
        {
            b=b^a[min];
            min++;
        }
        printf("%d\n",b);
        t++;
    }
    return 0;
}