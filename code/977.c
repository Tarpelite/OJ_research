#include <stdio.h>

int main(int argc, const char * argv[]) {
    int m,n;
    double c=1;
    scanf("%d %d",&m,&n);
    for (int i=0; i<n; i++) {
        c=(double)(m-i)*c/(n-i);
    }
    printf("%.0lf\n",c);
    return 0;
}