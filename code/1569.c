#include<stdio.h>
int main()
{
    int n,a[100001]= {0},num,i,k,j;
    scanf("%d\n",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d\n",&num);
        a[num]++;
    }
    scanf("%d",&k);
    for(j=99999; j>0; j--)
    {
        if(a[j]!=0)
        {
            k--;
            if(k==0)
                printf("%d %d",j,a[j]);
        }

    }
    return 0;
}