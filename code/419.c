#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
    int n,k,a[100001]={0},i=1,j=0,x,q;
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&x);
        a[x]++;i++;
    }
    scanf("%d",&k);

    for( int p=100000;p>0;p--){
        if(a[p]!=0){
            j++;
        }
        if(j==k){
           q=p;break;
        }
    }
    printf("%d %d",q,a[q]);

    return 0;
}