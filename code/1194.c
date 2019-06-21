#include <stdio.h>
#include <math.h>
int main()
{

    double n,m,p=1,s,k=1,o=1;
    scanf("%lf%lf",&m,&n);

    if (m==0){s=0;}
    else if (m<n){s=1;}
    else{
    for (int i = 1; i <=m ; ++i) {
        p*=i;


    }
    for (int j = 1; j <=n ; ++j) {
        k*=j;

    }
        for (int l = 1; l <=m-n ; ++l) {
            o*=l;

        }
    s=p/k; s=s/o;}
    printf("%.0lf",s);
    return 0;
}