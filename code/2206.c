#include<stdio.h>
int zhishu(int a)
{
    int i=2;
    while(i<a)
    {
        if(a%i==0)
            return 0;
        else i++;
    }
    return 1;

}
int main()
{
    int x,y;
    scanf("%d",&x);
    y=x+1;
    while(zhishu(y)==0)
        y++;
    printf("%d",y);
    return 0;
}