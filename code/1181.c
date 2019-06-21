#include <stdio.h>
#include <stdlib.h>
int N(int[],int i,int j,int n);
int M(int[],int i,int j,int n);
int H(int[],int i,int j,int n);
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
int main()
{
   int n,K,a[110]={0},b[110]={0},c[110]={0},i;
   scanf("%d %d",&n,&K);
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   for(i=1;i<=K;i++){
    scanf("%d %d",&b[i],&c[i]);
   }

   for(i=1;i<=K;i++){
    printf("%d\n",H(a,min(N(a,b[i],c[i],n),M(a,b[i],c[i],n)),max(N(a,b[i],c[i],n),M(a,b[i],c[i],n)),n));
   }



}
int N(int va[],int i,int j,int n)
{
    int x,y=0;
    for(x=i;x<=j;x++){
        y+=va[x]%n;
        y%=n;
    }
    return y;

}

int M(int va[],int i,int j,int n)
{
    int x,y=1,z;
    for(x=i;x<=j;x++){
        y*=va[x]%n;
        y%=n;
    }
    return y;
}

int H(int va[],int i,int j,int n)
{
    int x,y;
    y=va[i];
    for(x=i+1;x<=j;x++){
        y^=va[x];
    }
    return y;
}