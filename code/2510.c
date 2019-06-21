#include <stdio.h>

int num[10000000];
void QuickSort(int *, int, int);

int main()
{
	int n,i,k,j=1,a,count=0,sign,temp,flag;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	scanf("%d",&sign);
	
	QuickSort(num,0,n-1);
	
	a=num[n-1];
	for(i=n-1;i>=0;i--){
		if(num[i]<a){
			a=num[i];
			j++;
		}
		if(j==sign)
			break;
	}
	for(i=n-1;i>=0;i--){
		if(num[i]==a)
			count++;
		else if(num[i]<a)
			break;
	}
	
	printf("%d %d",a,count);
	
	return 0;
}

void QuickSort(int *a, int low, int high)
{
    int i = low;
    int j = high;
    int key = a[low];
    if (low >= high)  //如果low >= high说明排序结束了
    {
        return ;
    }
    while (low < high)  //该while循环结束一次表示比较了一轮
    {
        while (low < high && key <= a[high])
        {
            --high;  //向前寻找
        }
        if (key > a[high])
        {
            a[low] = a[high];  //直接赋值, 不用交换
            ++low;
        }
        while (low < high && key >= a[low])
        {
            ++low;  //向后寻找
        }
        if (key < a[low])
        {
            a[high] = a[low];  //直接赋值, 不用交换
            --high;
        }
    }
    a[low] = key;  //查找完一轮后key值归位, 不用比较一次就互换一次。此时key值将序列分成左右两部分
    QuickSort(a, i, low-1);  //用同样的方式对分出来的左边的部分进行同上的做法
    QuickSort(a, low+1, j);  //用同样的方式对分出来的右边的部分进行同上的做法
}