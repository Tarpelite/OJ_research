#include <stdio.h>
int arr[10000000];
void quicksort(int low,int high){
	int tmp,key=arr[low];
	int l=low,r=high;
	if(l>=r) return;
	while(l<r){
		while(l<r&&arr[r]<=key){
			r--;
		}
		if(arr[r]>key){
			tmp=arr[l];
			arr[l]=arr[r];
			arr[r]=tmp;
			l++;
		}
		while(l<r&&arr[l]>=key){
			l++;
		}
		if(arr[l]<key){
			tmp=arr[l];
			arr[l]=arr[r];
			arr[r]=tmp;
			r--;
		}
	}
	quicksort(low,l-1);
	quicksort(l+1,high);
}
int main(){
	int i=0,j=1,k,cnt=0,ret,k0;
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&k0);
	quicksort(0,n-1);
	ret=arr[0];
	k=0;
    while(j<k0){
    	if(arr[k+1]<arr[k]){
    		j++;
    		ret=arr[k+1];
		}
		k++;
	}
	for(i=0;i<n;i++){
		if(arr[i]==ret){
			cnt++;
		}
	}
	printf("%d %d",ret,cnt);
	return 0;
}