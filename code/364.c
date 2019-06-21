#include <stdio.h>
#include <math.h>
int s[100000];
int main() {
  int i,j,n,m;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&m);
    s[m]++;
    }
    int sum,max,k;
    scanf("%d",&k);
    for(j=100000;k>0;j--){
      if(s[j]!=0)
      k--;
      if(k==0)
      {
        sum=s[j];
        max=j;
        }
        }
        printf("%d %d",max,sum);
  return 0;
}