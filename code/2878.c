#include<stdio.h>

int main()
{
    unsigned int num[100001]={0};
    int n,a,i,k;
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        scanf("%d",&a);
        ++num[a];
    }
    scanf("%d",&k);
    for(i=100000;i>=0;--i)
    {
        if(num[i]!=0)
        k--;
        if(k<=0)
        {
            printf("%d %u\n",i,num[i]);
            break;
        }
    }

	return 0;
 }