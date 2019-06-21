#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int n,m;
    scanf("%d%d",&m,&n);
    if (n>=m) {
        printf("1");
        return 0;
    }
            int p;
            if (m-n<n) {
                p = m-n;
            } else {
                p = n;
            }
            int i,j=m,k=1;
            for (i=1; i<p; i++,m--,n++) {
                j*=m-1;
                k*=i+1;
            }
            printf("%d",j/k);
    return 0;
}