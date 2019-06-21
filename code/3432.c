#include<stdio.h>
int main()
{
    int n,i,k;
    scanf("%d",&n);
    for(k=n+1;k<200000;k++){
        for(i=2;i<=k;i++){
            if(k%i==0)
                break;
        }
        if(i==k)
            break;
    }
    printf("%d",k);
    return 0;
}