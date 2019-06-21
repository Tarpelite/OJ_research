#include<stdio.h>
#define max(x,y) ((x)>(y)?(x):(y))
#define min(x,y) ((x)<=(y)?(x):(y))
int main(void){
  int k, n, i, j;
  scanf("%d %d",&n,&k);

  int a[n];
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }

  int l[k],r[k],N[k],M[k],H[k];
  for(i=0;i<k;i++){
    scanf("%d %d",&l[i],&r[i]);
    N[i]=0;
    M[i]=1;
  }

  for(i=0;i<k;i++){
    for(j=l[i];j<=r[i];j++){
      N[i]+=a[j];
    }
    N[i]=N[i]%n;
  }

  for(i=0;i<k;i++){
    for(j=l[i];j<=r[i];j++){
      M[i]*=a[j];
      M[i]=M[i]%n;
    }
  }
  
  for(i=0;i<k;i++){
    H[i]=a[min(M[i],N[i])];
    for(j=min(M[i],N[i]);j<max(M[i],N[i]);j++){
      H[i]=H[i]^a[j+1];
    }
  }

  for(i=0;i<k;i++)
    printf("%d\n",H[i]);

  return 0;
}