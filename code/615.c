#include <stdio.h>
#include <math.h>

int main()
{
    int n,i;
    scanf ("%d",&n);
    for(i=n+1;;i++){
        if(zhishu(i)==1){
    printf ("%d",i);
    break;}}
}

int zhishu(int n)
{
    int b,c=0;
    for(b=2;b<=sqrt(n);b++){
       if(n%b==0)
       c++;
       }
    if(c==0)
        return 1;
    else
        return 0;
}