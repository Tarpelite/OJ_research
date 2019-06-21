#include<stdio.h>
int main()
{
    int n,i,a;
    scanf("%d",&n);
    while(1){
        n++;
        for(i=2;i<n;i++){
            a=n%i;
            if(a==0)break;
        }
        if(a!=0){
            printf("%d",n);
            break;
        }
    }
    return 0;
}