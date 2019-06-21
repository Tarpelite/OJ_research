#include<stdio.h> 
int main()
{int a[100000],n,i,b,d;
scanf("%d\n",&n);
for(i=0;i<100000;i++)
a[i]=0;
for(i=0;i<n;i++)
{scanf("%d",&b);
a[b]=a[b]+1;
};
scanf("%d",&d);
for(i=99999;i>=0;i--)
{if(a[i]>0) d--;
if(d==0) break;
};
printf("%d %d",i,a[i]);
return 0;
}