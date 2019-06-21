#include<stdio.h>

int main()
{ double jiecheng(double n);
  double m,n,x,a,b,c;
  scanf("%lf %lf",&m,&n);
  if (m<=n&&m>0) printf("1");
  else if (m==0||n==0) printf("0");
  else{a=jiecheng(m),b=jiecheng(n),c=jiecheng(m-n);
       x=a/(b*c);
       printf("%.0lf",x);
  }
return 0;
}
double jiecheng(double n){double y;
if(n==0||n==1)y=1;
else y=jiecheng(n-1)*n;
return(y);
}