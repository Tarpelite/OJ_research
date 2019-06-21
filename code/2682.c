#include<stdio.h>
int a[10000000];
void swap(int a[], int i, int j)
{
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

int partition(int a[], int low, int high)
{
	int pivotkey;
	pivotkey = a[low];//单纯的记录值
	while (low < high)//以pivoekey为交换媒介（枢轴），将大于它的放在后边，小于它的放在前面
	{
		while (low < high && a[high] >= pivotkey)//条件判断 low < high
			high--;
		swap(a, low, high);
		while (low < high && a[low] <= pivotkey)
			low++;
		swap(a, low, high);
	}
	return low;//返回枢轴所在位置
}

void QSort(int a[], int low, int high)
{
	int pivot;
	if (low < high)//是 if
	{
		pivot = partition(a, low, high);//将a[]一分为二

		QSort(a, low, pivot - 1);//对低子表递归排序
		QSort(a, pivot + 1, high);//对高子表递归排序
	}
}

void quickSort(int a[], int low, int high)
{
	QSort(a, low, high);
}
int main()
{
    int n,i,j,k,s;
    scanf("%d",&n);
    int b[n],c[n];
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    quickSort(a,0,n-1);
    j=0;
    b[0]=a[0];c[0]=0;
    for(i=1;i<=n-1;i++)
    {
        if(a[i]>b[j])
        {
            b[j+1]=a[i];
            c[j+1]=i;
            j++;
        }
    }
    if(k>1)
    printf("%d %d\n",b[j-k+1],c[j-k+2]-c[j-k+1]);
    if(k==1)
    printf("%d %d\n",b[j-k+1],n-c[j-k+1]);
    return 0;

}