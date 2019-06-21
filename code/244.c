#include<stdio.h>
int comb_num(int, int);
int a,b;
int main()
{
scanf("%d%d", &a, &b);
printf("%d\n", comb_num(a,b));
return 0;
}



int comb_num(int a, int b)
{
    if(a<b||a<1||b<1)
    return 0;
    if(b==a)
    return 1;
    if(b==1)
    return a;
return comb_num(a-1, b)+comb_num(a-1, b-1);
}