#include<stdio.h>
int main()
{
   int n,m,k,i;
   scanf("%d",&n);
   int a[100000]={0};
   for(i=0;i<n;i++){
        scanf("%d",&m);
        a[m]++;
   }
   scanf("%d",&k);
   int b[100000]={0},c[100000]={0},j=0;
   for(i=0;i<100000;i++){
        if(a[i]>0){
            b[j]=i;
            c[j]=a[i];
            j++;
        }
   }
    printf("%d %d",b[j-k],c[j-k]);
    return 0;
}