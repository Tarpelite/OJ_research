#include<stdio.h>

int main()
{
    int n,K,a[10001],b[101],c[101],d[101],e[101],J[101],i,j,A,B;
    scanf("%d%d",&n,&K);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
int N(int l,int r)
{
   int Add=0,i;
   for(i=l;i<=r;i++){
    Add=(Add+a[i])%n;
   }
   return Add;
}
int M(int l,int r)
{
   int Mul=1,i;
   for(i=l;i<=r;i++){
    Mul=(Mul*a[i])%n;
   }
return Mul;
}
int H(int l,int r)
{
    int Or=a[l],i;
    for(i=l;i<r;i++){
       Or=Or^a[i+1];
     }
    return Or;
}
   for(i=0;i<K;i++){
        scanf("%d%d",&b[i],&c[i]);
   }
    for(i=0;i<K;i++){
        d[i]=N(b[i],c[i]);
        e[i]=M(b[i],c[i]);
        if(d[i]<=e[i]){
            A=d[i];
            B=e[i];
        }
        else {
            A=e[i];
            B=d[i];
        }
           J[i]=H(A,B);
    }

   for(i=0;i<K;i++){
    printf("%d\n",J[i]);
   }
   return 0;
}