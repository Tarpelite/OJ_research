#include<stdio.h>
 #include<stdlib.h> 
 #include <string.h>
  int s[10000000],n; 
  int cmp(const void *a, const void *b);
   int main() { 
   int k,i,j,temp,m,p=0,q,e;
    scanf("%d",&n);
	 for(i=0;i<n;i++)
	 { scanf("%d",&s[i]);
	  } scanf("%d",&k);
	   qsort(s,n,sizeof(s[0]),cmp);
	    for(i=n-1,j=0;j<i;j++,i--){ 
		temp=s[i]; s[i]=s[j];
		 s[j]=temp;
		  } j=0; 
		  m=s[0];
		   for(i=0;i<n;i++){ 
		   if(m==s[i]){
		    p++;
			 } 
			 else{ j++; 
			 q=m; 
			 m=s[i];
			  e=p;
			   p=1;
			    } 
				if(j==k) break; 
				} printf("%d %d",q,e);
				 return 0;
				  } 
				  int cmp(const void *a, const void *b) 
				  { return(*(int *)a-*(int *)b);
				  }