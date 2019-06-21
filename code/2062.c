#include <stdio.h>

int GetMaxVal(int* arr, int len)
{
    
    int maxVal = arr[0]; 
    int i;
    for(i = 1; i < len; i++) 
    {
        if(arr[i] > maxVal)
            maxVal = arr[i];
    }
    
    return maxVal;  
}
 

void BucketSort(int* arr , int len)
{
    int tmpArrLen = GetMaxVal(arr , len) + 1;
    int tmpArr[tmpArrLen];  
    int i, j;
    
    for( i = 0; i < tmpArrLen; i++) 
        tmpArr[i] = 0;
    
    for(i = 0; i < len; i++)  
        tmpArr[ arr[i] ]++;
    
    for(i = 0, j = 0; i < tmpArrLen; i ++)
    {
        while( tmpArr[ i ] != 0) 
        {
            arr[j] = i;  
            j++;
            tmpArr[i]--;
        }
    }
}



int main ()
{	
	int n,i,k;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	
	

	BucketSort(a,n);

	
	int b[n];
	b[0]=a[0];
	int j=1;
	for(i=1;i<n;i++){
		if(a[i]!=a[i-1]){
			b[j]=a[i];
			j++;
		}
	}
	
	printf("%d ",b[j-k]);
	
	int cnt=0;
	for(i=n-k;a[i]>=b[j-k];i--){
		if(a[i]==b[j-k]){
			cnt++;
		}
	}
	
	printf("%d",cnt);
	
		
	return 0;
}