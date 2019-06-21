#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int j=0,count;
   int i,pan;
   while(j<1000){
    n=n+1;
    i=1;
    count=0;
    while(i<=n){
        pan=n%i;
        if(pan==0){
            count++;
        }
        i++;
    }
    if(count==2){
        break;
    }else j++;
   }
    printf("%d",n);
   return 0;
}