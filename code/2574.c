#include <stdio.h>
int main(){
	int n,k;
	int l,r;
	
	scanf("%d%d",&n,&k);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
      for(int i=0;i<k;i++){
int sum1=0,sum2=1;
scanf("%d%d",&l,&r);
for(int j=l;j<=r;j++){
sum1+=a[j];
if(sum2>=n) sum2%=n;
sum2*=a[j];
}
sum1%=n;
sum2%=n;
int min=sum1,max=sum2,temp;
if(min>max)
{
      temp=min;
     min=max;
     max=temp;}
int sum3=a[min];
for(int i=min+1;i<=max;i++){
sum3^=a[i];
}
printf("%d\n",sum3);}
	return 0;
}