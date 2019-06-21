#include<stdio.h>
#include<math.h>

int main()
{
  int n,i,k,j,t;
  scanf("%d",&n);
  while(1){
    n++;
    t=0;
    //k=sqrt(n);
    for(i=2;i<n;i++){
      j=n%i;
      //printf("%d\n",j);
      if(j==0)
      t=1;
      //printf("%d",t);
    }
   if(t==0){
    break;
   }
  }
  printf("%d",n);
}