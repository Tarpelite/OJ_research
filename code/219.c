#include <stdio.h>
#include <stdlib.h>



int main() {
	int n,k,input,i;
	
	int arr[100000]={0};
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&input);
		arr[input]++;
	} 
	scanf("%d",&k);
	
	int place=0;
	
	for(i=99999;i>=0;i--){
		if(arr[i]==0)
		 continue;
		place++;
		if(place==k)
		 break;
	}
	
	printf("%d %d",i,arr[i]);
	
	
	
	return 0;
}