#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int n,m;
    int i;
    int j=0;
    scanf("%d",&n);
    if (n<=2) {
        printf("2");
        return 0;
    }
    for (m=n+1; ; m++,j=0) {
        for (i=2; i<=sqrt(m); i++) {
            if (m%i==0) {
                j++;
            }
        }
        if (j==0) {
            printf("%d",m);
            break;
        }
    }
    return 0;
}