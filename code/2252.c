#include<stdio.h>
 unsigned long long int f(int x)
{
    if(x==0){return 1;}
    else if(x==1){return 1;}
    else{return x*f(x-1);
    }
}

int main(){
int m,n,result;
scanf("%d %d",&m,&n);
result=f(m)/(f(n)*f(m-n));
if(m>0&&m>=n&&n>0){
    printf("%d",result);
}else if(m==0||n==0)
{
    printf("0");
}else if(m>0&&m<n)
{
    printf("1");
}
return 0;}