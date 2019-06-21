#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,num;
    scanf("%d",&n);
    for(i=n+1;i<110000;i++){
            num=0;
      for(j=2;j<i;j++){
        if(i%j==0){
          num++;
          }
      }
      if(num==0){
        printf("%d",i);
        break;
      }
    }

    return 0;
}