#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,m,j;

    scanf("%d",&n);
    int c=1;

    for(i=n+1;c!=0;i++)
        {c=0;
        for(j=2;j<i;j++){
            if(i%j==0) c++;
    }
    m=i;}
    printf("%d",m);
    return 0;
}