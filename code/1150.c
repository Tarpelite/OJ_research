#include<stdio.h> 
int a[10000],n;
 int main(){ 	
int N(int ,int ,int ); 	
int M(int ,int ,int ); 	
int H(int ,int ); 	int k,i,j,l1,r1,suka,fuck,blyat[10000]; 	 
scanf("%d%d\n",&n,&k); 	 	 
for(j=0;j<n;j++) 	 
   scanf("%d",&a[j]); 	
  i=0; 	while(i<k){ 		scanf("%d%d",&l1,&r1); 		
suka=N(l1,r1,n)%n; 		
fuck=M(l1,r1,n)%n; 		
if(suka>fuck) 		
blyat[i]=H(fuck,suka); 		
else 		
blyat[i]=H(suka,fuck); 		 		
i++; 	} 	 
for(i=0;i<k;i++) 	 { 			printf("%d\n",blyat[i]); 			} 	 return 0; 	} 	 	int N(int l,int r,int s){ 		int i,sum=0; 		for(i=l;i<=r;i++) 		 sum+=(a[i]%s); 		sum=sum%s; 		return sum; 	} 	int M(int l,int r,int s){ 			int i,sum=1,m; 		for(i=l;i<=r;i++) 		 { sum*=(a[i]%s); 		 if(sum>=100) 		 sum%=n; 		} 		 sum=sum%s; 		return sum; 	} 	int H(int l,int r){ 		int i,sum; 		sum=a[l]; 		for(i=l+1;i<=r;i++) 		 sum=sum^a[i]; 		return sum; 		 	}