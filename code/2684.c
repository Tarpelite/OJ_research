#include <stdio.h>
int a[10000000];
void Swap(int *p, int *q)
{
    *p=*p^*q;
    *q=*q^*p;
    *p=*p^*q;
    return;
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
            Swap(&a[low], &a[high]);
            ++low;
        }
        while (low < high && key >= a[low])
        {
            ++low; 
        }
        if (key < a[low])
        {
            Swap(&a[low], &a[high]);
            --high;
        }
    }
    QuickSort(a, i, low-1);  
    QuickSort(a, low+1, j);  
}

int main()
{
	int n,i,j,b,num=1,k,c,q;
	scanf("%d", &n);
	q=n-1;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &k);
	QuickSort(a,0,n-1);

	for(i=q;i>0;i--){
		for(j=i-1;j>=0;j--){
			if(a[j]!=a[i]){
				num++;
				i=j+1;
				break;
			}
		}
		if(num==k+1) {
			b=a[j+1];
			c=j+1;
			break;
		}
    }
	int end=0;
	for(i=n-1;i>=c;i--){
		if(a[i]==b) end++;
	}
	printf("%d %d",b,end);
	return 0;
}