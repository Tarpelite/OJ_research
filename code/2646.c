#include <stdio.h>
int partition(int *a,int left,int right){//这个函数用来对数组进行分隔 
	int tag=a[left];
	int temp;
	for(;;){
		if(left<right){
			while(a[right]<tag)
				right--;
			//保证循环结束时 left = right
			if(left>=right)
				break;
			temp=a[right];
			a[right]=a[left];
			a[left++]=temp;
		}
		else
			break;
		if(left<right){
			while(a[left]>tag)
				left++;
			//保证循环结束时 left = right
			if(left>=right)
				break;
			temp=a[left];
			a[left]=a[right];
			a[right--]=temp;
		}
		else
			break;
	}	
	return right;//返回分界点
}
void quicksort(int a[],int left,int right){//找到中值
	int middle;
	if(left<right){
		middle=partition(a,left,right);
		quicksort(a,left,middle-1);
		quicksort(a,middle+1,right);
	}
	else
		return;
}
int main(){
	int a[1000000],n,k,i,times=1,se=1;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d ",&a[i]);
	}

	quicksort(a,0,n-1);//引用函数

	/*for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
*/
	scanf("%d",&k);
	for(i=0;se<k;i++){
		if(a[i]==a[i+1]){
			continue;
		}
		else{
			se++;
		}
	}
	printf("%d ",a[i]);
	for(;;){
		i++;
		if(a[i]==a[i-1]){
			times++;
		}
		else{
			break;
		}
	}
	printf("%d\n",times);
	return 0;
}