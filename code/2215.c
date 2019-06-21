#include<stdio.h>
int a[10000000];
void quick_sort(int l, int r)
{
    if(l<r)
    {
        int i=l,j=r,x=a[l];
        while (i<j)
        {
            while(i<j&&a[j]>=x)
                j--;
            if(i<j) 
                a[i++]=a[j];
            while(i<j&&a[i]<x)
                i++;    
            if(i<j)   
                a[j--]=a[i];  
        }  
        a[i]=x;  
        quick_sort(l,i-1);   
        quick_sort(i+1,r);  
    }  
}
int main()
{    
    int n,k,i,j,m,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    	scanf("%d",&a[i]);
	scanf("%d",&k);
	quick_sort(0,n-1);
	for(t=a[n-1],i=n-2,j=1;i>=0;i--){
		if(t!=a[i]){
			j++;
			if(j-1==k)
				break;
			else{
				m=1;
				t=a[i];
			}
		}
		else{
			m++;
		}
	}
	printf("%d %d",a[i+1],m);
	return 0;
}