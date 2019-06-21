# include <stdio.h>
int a[10000009];
void QuickSort(int *, int, int);  
int main()
{
    int i,n,k,count=0,p=0,j;  
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
    QuickSort(a, 0, n-1);  
    for(j=n-1;j>=0;j--)
    {
    	if(a[j]!=a[j-1])
    	{
		count++;
    	}
    	if(count==k)
    	break;
    }
    for(i=0;i<n;i++)
    {
	if(a[i]==a[j])
	p++;
    }
	printf("%d %d",a[j],p);
}

void QuickSort(int *a, int low, int high)
{
    int i = low;
    int j = high;
    int key = a[low];
    if (low >= high)  
    {
        return ;
    }
    while (low < high)  
    {
        while (low < high && key <= a[high])
        {
            --high; 
        }
        if (key > a[high])
        {
            a[low] = a[high]; 
            ++low;
        }
        while (low < high && key >= a[low])
        {
            ++low;  
        }
        if (key < a[low])
        {
            a[high] = a[low];  
            --high;
        }
    }
    a[low] = key;  
    QuickSort(a, i, low-1);  
    QuickSort(a, low+1, j);  
}