#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1,flag=0;
    scanf("%d",&n);
    while(1){
        n++;
        flag=0;
        for(i=1;i<=n;i++){
            if(n%i==0){
			flag++;}
        }
        if(flag==2)break;
    }
    printf("%d",n);
    return 0;
}