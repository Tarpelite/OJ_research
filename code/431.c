#include<stdio.h>
#include<stdlib.h>
int a[10000005];
int cmp1(const void *a, const void *b){
  return *(int *)b-*(int *)a;
}
int main()
{
  int n,k,i,j,c,t=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  qsort(a,n,sizeof(a[0]),cmp1);

  scanf("%d",&k);
  j=0;c=0;
  for(i=0;1;i++){
    if(a[i]==a[i+1]){
        j++;
    }
    else{
        c++;
        if(c==k)
        break;
    }
  if(a[i+1]!=a[i])
    j=0;

  }
  //for(i=0;i<n;i++){
    //printf("%d\n",a[i]);
  //}
  printf("%d %d",a[i],j+1);

  return 0;


}