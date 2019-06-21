#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a ,const void *b ) {
  return *(int *)b - *(int *)a;
}

int main(){
    int n,k,i,j=1,l=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&k);
    qsort(a,n,sizeof(int),cmp);
    for(i=0;i<n-1;i++){
        if(j==k){
            while(a[i+l]==a[i])l++;
            break;
        }
        j+=(a[i]>a[i+1]);
    }
    printf("%d %d\n",a[i],l);
}