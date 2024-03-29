#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h> 
int a[10000010],n,k,p;

void Qsort(int arr[], int low, int high)
{
    if (high <= low) return;
    int i = low;
    int j = high + 1;
    int key = arr[low];
    while (1)
    {
        /*从左向右找比key大的值*/
        while (arr[++i] > key)
        {
            if (i == high){
                break;
            }
        }
        /*从右向左找比key小的值*/
        while (arr[--j] < key)
        {
            if (j == low){
                break;
            }
        }
        if (i >= j) break;
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    Qsort(arr, low, j - 1);
    Qsort(arr, j + 1, high);
}

int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	Qsort(a,1,n);
	scanf("%d",&k);
	int num=a[1],sum=0,ans;p=1;
	for(int i=1;i<=n,p<=k;i++)
	{
		if(a[i]!=num)
		{
			p++;
			num=a[i];
			if(p==k) ans=num;
		}
		if(p==k&&a[i]==num) sum++;
	}
	printf("%d %d",ans,sum);
	return 0;
}