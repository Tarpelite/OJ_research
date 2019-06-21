#include<stdio.h>
 int main (){
 	int n,K;
 	int i,j;
 	int l[105],r[105];
 	int N,M,H;
 	int a[105];
   int k;
 	scanf("%d%d",&n,&K);
 	for (i=0;i<n;i++)
	 scanf("%d",&a[i]);
	 for(i=0;i<K;i++)
	 {
	 	
	 scanf("%d%d",&l[i],&r[i]);}
	 for(i=0;i<K;i++){
	 
	 N=0;
 	    M=1;
	 for(k=l[i];k<=r[i];k++){
	 	N=N+a[k];
	 	N%=n;
	 	M=M*a[k];
	   M%=n;
	 }	

	 	if(M>N){
	 		H=a[N];
	 		for(j=N+1;j<=M;j++){
	 			H=H^a[j];
			 }
		 }
		 else if(M<N)
	 	{
	 		H=a[M];
	 		for(j=M+1;j<=N;j++)
	 		H=H^a[j];
		 }
		 else if(M==N){
		 	H=a[N]; 
		 }
		 printf("%d\n",H);
	 	
}
	  return 0;
 }