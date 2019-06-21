#include <stdio.h>
int a[10000005]={0};
int b[10000005]={0};
int c[10000005]={0};

int main()
{
    int n,k,i=1,j,h=0,y;
    scanf("%d",&n);
   for(i=0;i<n;i++)
        {scanf("%d",&a[i]);}
    for(i=0;i<n;i++)
        {y=a[i];
        c[y]=1;}
    for(i=0,j=0;i<n+1;i++)
    {if(c[i]==1)
        {b[j]=i;
        j++;}}
    scanf("%d",&k);
    for(i=0;i<n+1;i++)
        {if(a[i]==b[j-k])
            h++;}


    printf("%d %d",b[j-k],h);





    return 0;
}