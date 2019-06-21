#include<stdio.h>
#include<math.h>

int main()
{
	int n,k,i,j1,j2,a[200];
	scanf("%d%d",&n,&k);
	 for(i=0;i<n;i++){
	 	scanf("%d",&a[i]);
	 }
	 int l,r,nb,min,max;
	 unsigned long long mb;
	 unsigned hb; 
	 while(scanf("%d%d",&l,&r)!=EOF){
	 	nb=0,mb=1;
	 	for(j1=l;j1<=r;j1++){
	 		nb=nb+(a[j1]);
	 		
		 }
		 nb=nb%n; 
		 for(j1=l;j1<=r;j1++){
		 	mb=mb*(a[j1]);
		 	mb=mb%n;
		 }
		 mb=mb%n;
		 if(nb>=mb){
		 	max=nb;min=mb;
		 }
		 else{
		 	max=mb;min=nb;
		 }
		 hb=a[min];
		 for(i=min+1;i<=max;i++){
		 	hb=hb^a[i];
		 }
		 printf("%u\n",hb);
	 }
	return 0;
 }