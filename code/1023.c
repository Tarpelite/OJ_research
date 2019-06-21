#include<stdio.h>
int main()
{
    int n,i,j,t;
    scanf("%d",&n);
     for(i=n+1;i<200000;i++){
            t=1;
            for(j=2;j<i;j++){
                if(i%j==0){
                    t=0;
                    break;
                }
            }
            if(t==1){
                printf("%d",i);
                break;
                }
            }
            return 0;
}