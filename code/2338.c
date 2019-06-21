#include<stdio.h>
#include<math.h>
int main()
{
    int x,a,i;
    scanf("%d",&x);
    for(a=x+1;;a++){
            int flag=0;
        for(i=2;i<=sqrt(a);i++){
            if(a%i==0){
                    flag=1;
            break;
            }

        }
    if(flag==0){
        printf("%d",a);
        break;
    }
    }
    return 0;
}