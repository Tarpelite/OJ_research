#include <stdio.h>
#include <stdlib.h>
int is_z(int n)
{
    int i;
    for(i=2;i<n;i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main()
{
    int n,i;
    int p,j=2;
    scanf("%d",&n);
    if(n==1)
        printf("%d",j);
    else{
    for(i=n+1;;i++){
        p=is_z(i);
        if(p==1)
            break;

    }
    printf("%d",i);}
    return 0;
    }