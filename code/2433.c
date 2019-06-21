#include<stdio.h>
#include<limits.h>
#define M INT_MAX

int main()
{
    int a, i, j;
    scanf("%d", &a);
    for(j=a+1;j<M;j++){
           int flag=1;
            for(i=2;i<j-1;i++){
                if(j%i==0){
                        flag=0;
                        break;
                }
            }
            if(flag){
                printf("%d", j);
                break;
            }
    }
    return 0;
}