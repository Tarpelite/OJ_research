#include<stdio.h>

int main()
{
  long long a=1,b=1,c=1,d,m,n,i;
  scanf("%lld %lld",&m,&n);
  if(n==0){
  putchar('0');
  }
else{
for(i=1;i<=n;i++){
a=a*m;
m--;
}
for(i=1;i<=n;i++){
b=b*c;
c++;
}
d=a/b;
printf("%lld",d);
}


 return 0;
}