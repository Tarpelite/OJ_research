#include<stdio.h>
void Swap(int arr[], int low, int high)
{
    int temp;
    temp = arr[low];
    arr[low] = arr[high];
    arr[high] = temp;
}
 
int Partition(int arr[], int low, int high)
{
    int base = arr[low];
    while(low < high)
    {
        while(low < high && arr[high] >= base)
        {
            high --;
        }
        Swap(arr, low, high);
        while(low < high && arr[low] <= base)
        {
            low ++;
        }
        Swap(arr, low, high);
    }
    return low;
}
 
void QuickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int base = Partition(arr, low, high);
        QuickSort(arr, low, base - 1);
        QuickSort(arr, base + 1, high);
    }
}
 
int main()
{
int n,i,j,temp,save;
     scanf("%d",&n);
     int a[n];
     for(i=0;i<n;i++)
         scanf("%d",&a[i]);
    int k,times=1,T=0;
    scanf("%d",&k);
    QuickSort(a, 0, n-1);
 for( i=n-1;i>=0;i--)
    {
	if(a[i]!=a[i-1])
	times++;
	if(k==times)
	break;
	}
	save = a[i-1];
	for( i=0;i<n;i++)
    {
	if(a[i]==save)
	T=T+1;
	}
        printf("%d %d",save,T);
    
    return 0;
}