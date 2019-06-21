#include<stdio.h>
int main()
{
    int n,K,A[100],l[100],r[100],i,N,M,H,x,min,max;
    scanf("%d%d",&n,&K);
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<K;i++){
        scanf("%d%d",&l[i],&r[i]);
    }
    for(i=0;i<K;i++){
         for(x=l[i],N=0,M=1;x<=r[i];x++){
        N=N+A[x];
        M=M*A[x];
        N=N%n;
        M=M%n;
    }
    if(N<M){
        min=N;
        max=M;
    }
    else{
        min=M;
        max=N;
    }
    H=A[min]; 
    for(x=min+1;x<=max;x++){
        H=H^A[x];
    }
    printf("%d\n",H);
    }
   return 0;
}