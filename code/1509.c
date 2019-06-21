#include<stdio.h>
int main()
{
int n,i,j,m;
scanf("%d",&n);
for(i=n+1;i<=600000;i++)
{
    for(m=1,j=2;j*j<=i;j++){

      if(i%j==0){
          m=0;
          break;
          }
      }
      if(m)
    {
       printf("%d\n",i);
       break;
      }
}
return 0;
}