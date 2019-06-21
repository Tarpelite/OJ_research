#include <stdio.h>
void quicksort(int a[],int left,int right);

int a[10000000],b[10000000];

int main()
{
    int i, j=0, n, k, t, m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);  
	scanf("%d",&k);
	quicksort(a,0,n-1);
	t=a[0];
    for(i=1;i<n;i++)
	{
		if(t!=a[i])
		{
			b[j]=a[i];
			j++;
			t=a[i];
		}
	}
	t=b[j-k];
	for(i=0;i<n;i++)
	{
		if(t==a[i])
		    m++;
	}
	printf("%d %d",t,m);
}
    
    void quicksort(int a[],int left,int right){

    int i,j,key,low,high;
    low=left;
    high=right;
    key=a[left];
    
	if (left<right)
    {
        while (low<high)
        {

            while ((low<high)&&(a[high]>=key))
            {
                high--;
            }
            a[low]=a[high];
            while ((low<high)&&(a[low]<=key))
            {
                low++;
            }
            a[high]=a[low];
        }
        a[low]=key;
            quicksort(a,left,low-1);
            quicksort(a,low+1,right);
    }
}