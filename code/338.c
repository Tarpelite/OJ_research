#include<stdio.h>
int main()
{
	int num,k,x=0,j=0,max,min;
	scanf("%d %d",&num,&k);
	int a[101],l[101],r[101];
	int n[101],m[101],h[101];
	for(x=0;x<k;x++){
		n[x]=0;
		m[x]=1;
		h[x]=0;
	}
	for(x=0;x<num;x++)
		scanf("%d",&a[x]);
	for(x=0;x<k;x++)
		scanf("%d %d",&l[x],&r[x]);
	for(x=0;x<k;x++){
		for(j=l[x];j<=r[x];j++){
			n[x]+=a[j];
			m[x]*=a[j];
			m[x]%=num;
		}
		n[x]%=num;
		if(n[x]>m[x]){
			max=n[x];
			min=m[x];
			h[x]=a[min];
		    j=min+1;
		    for(j=min+1;j<=max;j++)
			    h[x]=h[x]^a[j]; 
		}else if(m[x]>n[x]){
			max=m[x];
			min=n[x];
		    h[x]=a[min];
		    j=min+1;
		    for(j=min+1;j<=max;j++)
			    h[x]=h[x]^a[j];
	    }else{
	    	max=n[x];
	    	h[x]=a[max];
		}
	    printf("%d\n",h[x]); 
	}
	return 0;
 }