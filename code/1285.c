# include <stdio.h>
void QuickSort(int *, int, int); 
int main(void)
{
    int i;  
    int n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
	int k;
	scanf("%d",&k);
    QuickSort(a, 0, n-1);  
   i=1; 
   int s;
   int j=n-1;
	while(1){
		if(a[j-1]!=a[j]){
			i++;
			j--;
		}else{
			j--;
		}
		if(i==k){
			s=j;
			break;
		}
	}
	j=0;
	for(i=s;;i--){
		if(a[i]==a[s]){
			j++;
		}
		if(a[i]!=a[s]){
			break;
		}
	}
	printf("%d %d",a[s],j);
    return 0;
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