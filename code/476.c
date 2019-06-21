#include<stdio.h>
int ZHI(int);
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n+1;i>0;i++) {
        if(ZHI(i)) break;
        };
    printf("%d",i);
    return 0;
}
int ZHI(int x)
{
    int i,t;
    int flag=1;
    t=x;
    for(i=t-1;i>1;i--) {
        if(x%i==0) {flag=0;break;}
        else flag=1;};
    if(flag==1) return 1;
    else return 0;
}