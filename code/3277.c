#include<stdio.h>
int ss(int a)
{
    int k;
    for(k=2;k*k<=a;k++)
    if(a%k==0)
    return 0;
 return 1;

}
int main()
{
 int n,m,flag;
 scanf("%d",&n);
 m=n+1;
 while(1){
    flag=ss(m);
    if(flag){
            printf("%d\n",m);
        break ;
    }
        m++;
 }
return 0;
}