#include<stdio.h>
#define max(x,y) (x>y?x:y)
#define min(x,y) (x<y?x:y)

int main()
{
int n,k,i,l,r,f1,f2,f3,j,p;
scanf("%d%d",&n,&k);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<k;i++)
{scanf("%d%d",&l,&r);
 for(p=0,j=l;j<=r;j++)
    p=p+a[j];
 f1=p%n;
 f2=1;
 for(j=l;j<=r;j++)
    f2=((f2%n)*(a[j]%n))%n;
 for(f3=a[min(f1,f2)],j=min(f1,f2)+1;j<=max(f1,f2);j++)
    f3=f3^a[j];
 printf("%d\n",f3);}
return 0;
}