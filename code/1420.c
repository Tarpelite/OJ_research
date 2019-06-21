#include<stdio.h>
long long k[10000001]={0},t[10000001]={0};
int main()
{
    long long a,i,m,j=0,l=10000000,p;
    scanf("%lld",&a);
    for(i=1;i<=a;i++){
        scanf("%lld",&p);k[p]=p;t[p]++;}
    scanf("%lld",&m);
        for(l=10000000;l>=1;l--)       {
          if(k[l]>0) j++;
        if(j==m) {printf("%lld %lld",k[l],t[l]);break;}
   }
    return 0;
}