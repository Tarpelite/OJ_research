#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,j,x,i;
   scanf("%d",&n);

        for(i=n+1;i<100005;i++){
    for(j=2;j<i;j++){
        if(i%j==0){
                x=1;
            break;}
        else x=0;
    }
    if(x==0){printf("%d",i);
    break;
    }
        }
    return 0;
}