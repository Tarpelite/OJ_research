#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,flag;
    scanf("%d",&n);
    if (n==2)
    {
        printf("%d",k=3);
    }
    else {
        int i;
        for (k=n+1,flag=1;k<=100010;k++){
            for (i=3;i<k;i++)
            {
                if (k%i==0){
                    flag=0;
                }
            }
            if (flag ==1){
                printf("%d",k);
                break;
            }
            flag = 1;
        }
    }
    return 0;
}