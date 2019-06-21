#include <stdio.h>
#include <stdlib.h>

int main()
{int n,k,q,t,i=0,j=0,a[101]={0},l[101]={0},r[101]={0},max,min,h,b=0,c=1;
scanf("%d%d",&n,&k);

q=k;
t=n;
while(n)
{
    scanf("%d",&a[i]);
    i++;
    n--;
}
while(k)
{
    scanf("%d%d",&l[j],&r[j]);
    j++;
    k--;
}
for(j=0;j<q;j++)
{


   for(b=0,i=l[j];i<r[j]+1;i++)
    {
        b=b+a[i];

    }

b=b%t;
    for(c=1,i=l[j];i<r[j]+1;i++)
    {
        c=((c%t)*(a[i]%t))%t;
    }


    if(b>c)
    {
        min=c;
        max=b;
    }
    else{min=b;max=c;}
h=a[min];
    for(i=min+1;i<max+1;i++)
    {

      h=h^a[i];
    }

    printf("%d\n",h);}
    return 0;
}