#include<stdio.h>
int main() 
{
   int m,n,i;
   
   long long int sum=1;
   
   scanf("%d %d",&m,&n);

   if(n<m-n)//c(a,b)=c(a,a-b)? 可以减少运算
   
      n=m-n;

 for(i=n+1;i<=m;i++) //c(a,b)=a!/b!(a-b)! 再对此式约分
 
     sum*=i;

    for(i=1;i<=m-n;i++)
 
          sum/=i; 
          
    printf("%d\n",sum);

 return 0;
}