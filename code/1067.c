#include<stdio.h> 
#include<math.h>
#define b 100000
int a[b+1];
int main(){int i,k;int n;int min ,max;max=0;min=b;
scanf("%d",&n);
while(n--){scanf("%d",&k);a[k]++;if(k<min)min=k;if(k>max)max=k;
}
scanf("%d",&k);
for(i=max;i>=min;i--){
	if(a[i]>0)k--;
	if(!k)break;
}
printf("%d %d",i,a[i]);return 0;	
}