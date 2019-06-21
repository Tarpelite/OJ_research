#include<stdio.h>
int main()
{
 int m,n,i;
 double res1=1.,res2=1.,res3=1.,res;
 scanf("%d%d",&m,&n);
 for(i=1;i<=m;i++){
    res1*=i;
    }
 for(i=1;i<=n;i++){
    res2*=i;
    }
 for(i=1;i<=m-n;i++){
    res3*=i;
}
 res=res1/(res2*res3);
 printf("%.0lf\n",res);
return 0;
}