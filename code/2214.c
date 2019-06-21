#include<stdio.h>
int a[100005];
int main()
{
    int n,num,x=0,i,k;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        a[num]++;
    }

    scanf("%d",&k);

    for(i=100004;i>=0;i--)
    {
        if(a[i]!=0)x++;
        if(x==k){
            printf("%d %d",i,a[i]);
            break;
        }
    }
    return 0;


}