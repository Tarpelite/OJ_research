#include <stdio.h>
int main(){
long long a,b,c,l=1;
scanf("%lld%lld",&a,&b);
c=a-b;
for(a;a>0;a--) l=l*a;
for(b;b>0;b--) l=l/b;
for(c;c>0;c--) l=l/c;
printf("%lld",l);
return 0;
}