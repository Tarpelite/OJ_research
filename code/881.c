#include<stdio.h>

int f(int x,int y,int n,int a[]){
  int i,N=0,M=1,H,t;
  for(i=x;i<=y;i++){
    N+=a[i];
    M=(M%n)*(a[i]%n);
  }
  N=N%n;
  M=M%n;
  if(N>M){
    t=N;N=M;M=t;
  }
  H=a[N];
  for(i=N+1;i<=M;i++){
    H=H^a[i];
  }
  return H;
}
int main()
{
  int n,k,a[105],l,r,i,m,b[105];
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=1;i<=k;i++){
    scanf("%d %d",&l,&r);
    m=f(l,r,n,a);
    b[i]=m;
  }
  for(i=1;i<=k;i++){
    printf("%d\n",b[i]);
  }
}