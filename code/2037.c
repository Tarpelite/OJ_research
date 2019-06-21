#include<stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){
  return *(int *)a-*(int *)b;
}
int main(void)
{
  int n, k;
  scanf("%d",&n);

  int a[n], x, i, j, t, m;

  for(i=0;i<n;i++)
    scanf("%d",&a[i]);

  scanf("%d",&k);

  qsort(a,n,sizeof(a[0]),cmp);

  for(i=n-1;i>n-k;i--){
    if(a[i]==a[i-1]){
      k++;
    }
  }

  for(i=n-k,j=1;i>0;i--){
    if(a[i]==a[i-1]){
      j++;
    }
    else{
      break;
    }
  }


  printf("%d %d", a[n-k], j);

  return 0;
}