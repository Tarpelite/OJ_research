#include<stdio.h>
#include<math.h>

int main()
{
	int m,k,i,j1,j2,a[200];
	scanf("%d%d",&m,&k);
	 for(i=0;i<m;i++){
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
		 nb=nb%m; 
		 for(j1=l;j1<=r;j1++){
		 	mb=mb*(a[j1]);
		 	mb=mb%m;
		 }
		 mb=mb%m;
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