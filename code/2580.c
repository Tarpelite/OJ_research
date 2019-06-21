#include <stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);

    if(m==0||n<=0){
        printf("0");
        goto out;
    }

    if(m<=n){
        printf("1");
    }else{

    int i;
    double x,y;
    for(x=1,i=m;i>m-n;i--){
        x*=i;
    }
    for(y=1,i=n;i>0;i--){
        y*=i;
    }
    double z;
    z=x/y;
    printf("%.0f",z);
    }
    out:
    return 0;
}