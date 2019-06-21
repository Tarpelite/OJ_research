#include<stdio.h>
int main()
{
 int n,i=2,m;
 scanf("%d",&n);
  m=n+1;
  while(1){
        i=2;
      while((m%i)!=0)
      {
          i++;
      }
      if(i==m){break;}
        else if(i!=m)
            {m++;}
}
printf("%d",m);
return 0;
}