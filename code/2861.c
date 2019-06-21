#include <stdio.h>
#include <stdlib.h>

int a[105];
int n;
int h(int l,int r)
{
    int x=0,i;
    for(i=l;i<=r;i++){
    x=x^a[i];}
    return x;
}
int f(int l,int r)
{
    int i,y=0;
  for(i=l;i<=r;i++){
    y=(y+a[i])%n;
  }
  return y;
  }
int m(int l,int r)
{
    int z=1,i;
    for(i=l;i<=r;i++){
    z=(z*(a[i]%n))%n;
}
return z;}

int main()
{
    int i,l,r,k,t;
    int he,ji,an;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=k;i++){
   scanf("%d %d",&l,&r);
   he=f(l,r);
   ji=m(l,r);
   if(he>ji){
    t=he;
    he=ji;
    ji=t;
   }
   an=h(he,ji);
   printf("%d\n",an);}
    return 0;
}