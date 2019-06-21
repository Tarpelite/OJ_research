#include<stdio.h>
#define MN 100000
int A[MN];
void main()
{
    int K,k,j,p;
    long long int n,i;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%d",&p);
        A[p]++;
    }
    scanf("%d",&K);
    for(k=MN-1,j=0;k>-1;k--){
        if(A[k]){
            j++;
        }
        if(j==K){
            printf("%d %d",k,A[k]);
            break;
        }
    }
}