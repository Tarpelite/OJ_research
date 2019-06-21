#include<stdio.h>
int p[1000005];
    int n,k;
int main()
{

    scanf("%d",&n);
    while(n--){
        int a;
        scanf("%d",&a);
        p[a]++;
    }
    scanf("%d",&k);
    for(int i=1000004;i>=0;i--){
        k-=(p[i]>0);
        if(k<=0){
            printf("%d %d",i,p[i]);
            return 0;
        }
    }
    return 0;
}