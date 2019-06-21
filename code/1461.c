#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;;i++){
        for(j=2;j<=(n+i)/2;j++)
        {
            if((n+i)%j==0)
                break;
        }
        if(j==(n+i)/2+1)
           {
            printf("%d",n+i);
        break;}
    }
    return 0;
    }