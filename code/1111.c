#include<stdio.h>
int main()
{
    int n,i,r,q=0;
    scanf("%d",&n);
    if(n==1)
        printf("2");
    else{
    for(i=n+1;i<=200000;i++){
        q=0;
        for(r=1;r<=i;r++){
            if(i%r==0)
            q+=1;
        }
        if(q==2)
            break;
    }
    printf("%d",i);
    }
    return 0;
}