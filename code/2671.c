#include<stdio.h>
int main()
{
    int i=1,n,j,l;
    scanf("%d",&n);
    if(n==2) {printf("3");return 0;}
    else for(n=n+2;n<100010;n+=2)
    {
        for(j=2;j<n;j++)
        {
            l=0;
            if(n%j==0) {l++;break;}
        }
        if(l==0) break;
    }
    printf("%d",n);
    return 0;
}