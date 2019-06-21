#include <stdio.h>
#include <math.h>
int check(int x)
{
    int i;
    for(i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            return 1;
        }
    }
    return 0;
}
int main(){
    int x;
    scanf("%d",&x);
    if(x==2)
    {
        printf("3");
    }
    else{
    x+=2;
    while(check(x))
    {
        x+=2;
    }
    printf("%d",x);}
}