#include<stdio.h>
int main()
{
    int n,k,i,f;
    scanf("%d",&n);
    for(k=n+1;k<=1e16;k++){
        f=0;
        for(i=2;i<=k-1;i++){
            if(k%i==0){
                f=1;
                break;
            }
        }
        if(f==0){
            printf("%d",k);
            break;
        }
    }
    return 0;

}