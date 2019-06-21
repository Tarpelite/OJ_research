#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int x,i,k,flag=0;
    scanf("%d",&x);
    for (i=x+1; i<200000; i++) {
        flag=0;
        for (k=2; k<i; k++) {
            if (i%k==0) {
                flag++;
                break;
            }
        }
        if (flag==0) {
            printf("%d",i);
            break;
        }
    }
    
    return 0;
}