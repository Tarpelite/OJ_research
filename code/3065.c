#include <stdio.h>
#include <stdlib.h>


int main()
{int k[100001]={0},i,j,n,th;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&j);
    k[j]=k[j]+1;
}
 j=0;
 scanf("%d",&th);
 for(i=100000;j<th;i--){
    if(k[i]!=0)
        j++;
 }
 printf("%d %d",i,k[++i]);
    return 0;

}