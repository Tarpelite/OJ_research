#include<stdio.h>
int main()
{
	int num,k,i=0,j=0,max,min;
	scanf("%d %d",&num,&k);
	int a[101],l[101],r[101];
	int n[101],m[101],h[101];
	for(i=0;i<k;i++){
		n[i]=0;
		m[i]=1;
		h[i]=0;
	}
	for(i=0;i<num;i++)
		scanf("%d",&a[i]);
	for(i=0;i<k;i++)
		scanf("%d %d",&l[i],&r[i]);
	for(i=0;i<k;i++){
		for(j=l[i];j<=r[i];j++){
			n[i]+=a[j];
			m[i]*=a[j];
			m[i]%=num;
		}
		n[i]%=num;
		if(n[i]>m[i]){
			max=n[i];
			min=m[i];
			h[i]=a[min];
		    j=min+1;
		    for(j=min+1;j<=max;j++)
			    h[i]=h[i]^a[j]; 
		}else if(m[i]>n[i]){
			max=m[i];
			min=n[i];
		    h[i]=a[min];
		    j=min+1;
		    for(j=min+1;j<=max;j++)
			    h[i]=h[i]^a[j];            //这里有没有毛病 
	    }else{
	    	max=n[i];
	    	h[i]=a[max];
		}
	    printf("%d\n",h[i]); 
	}
	return 0;
 }