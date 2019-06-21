#include<stdio.h>
void QuickSort(int array[], int left, int right);
int main()
{
    int n,i,j,k,v;
    scanf("%d",&n);
    int a[n],c[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&v);
    QuickSort(a,0,n-1);
    for(i=0;i<n;i++){
        c[i]=0;
    }
    j=0;
     for(i=0;i<n-1;i++){
        if(a[i]!=a[i+1])
            {
                j++;
                a[j]=a[i+1];
            }
        else{
            c[j]++;
        }
     }
     printf("%d %d",a[j-v+1],c[j-v+1]+1);
     return 0;
}
void QuickSort(int array[], int left, int right)
{
	if (left >= right)
		return;
	int i, j;
	int tmp;
	i = left;
	j = right;

	while (i < j)
	{
		while (array[j]>=array[left] && i<j)
			j--;
		while (array[i]<=array[left] && i<j)
			i++;

		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
	}

	tmp = array[left];
	array[left] = array[i];
	array[i] = tmp;

	QuickSort(array, left, i-1);
	QuickSort(array, i+1, right);
}