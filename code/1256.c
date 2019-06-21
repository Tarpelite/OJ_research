#include<stdio.h>

int main()
{int n,k,l=0,i,j=0,max,m,a[100005]={0};
scanf("%d",&n);
for(i=1;i<=n;i++){scanf("%d",&m);
a[m]++;
if(max<=m) max=m;
}
    scanf("%d",&k);

	for(i=1;i<=max;i++){if(a[i]!=0) j++;}
for(i=1;i<=max;i++){if(a[i]!=0) l++;
if(l==j-k+1) {
           printf("%d %d",i,a[i]);
		   }
}
      return 0;
  
}