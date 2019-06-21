#include<stdio.h>

int main()
{
    int n,a,i,b[100001]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        b[a]+=1;
    }
    int k,t=0,j=100001;
    scanf("%d",&k);
    while(j--){
        if(b[j]!=0)
            t++;
        if(t==k)
            break;
    }
    printf("%d %d",j,b[j]);
    return 0;
}