#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

int a[10000000];

int cmp(const void *s, const void *b)
{
    return *(int*)b - *(int*)s;
}

int main()
{
    int n,k,r,d,i,t;
scanf("%d",&n);

for(i=0;i<n;i++) scanf("%d",&a[i]);

scanf("%d",&k);

qsort(a,n,sizeof(a[0]), cmp);

d=1;
for(i=0;i<n-1;i++){
        if (d==k) break;
    if (a[i]>a[i+1]) d++;
}
if (k==1) printf("%d",a[0]);
else printf("%d ",a[i]);

d=1;
r=i;
for(i=0;i<n-1;i++){
        if (d==k+1) break;
    if (a[i]>a[i+1]) d++;
}
if (k==1) printf("%d",i+1);
else printf("%d",i-r);

return 0;
}