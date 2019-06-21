# include <stdio.h>
void QuickSort(int *, int, int);
int main(void)
{
    int i,j,n,k,s=0;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
    QuickSort(a,0,n-1);
    scanf("%d",&k);
    b[0]=a[0];
    for(j=i=1;i<n;i++){
    	if(a[i]==a[i-1])
    	continue;
		else{
			b[j]=a[i];
			j++;
		}
	}
	for(i=0;i<n;i++){
		if(a[i]==b[j-k])
		s++;
		else
		continue;
	}
	printf("%d %d",b[j-k],s);
    return 0;
}
void QuickSort(int *a,int low,int high)
{
    int i=low;
    int j=high;
    int key=a[low];
    if(low>=high){
        return;
    }
    while(low<high){
        while(low<high&&key<=a[high]){
            --high;
        }
        if(key>a[high]){
            a[low]=a[high];
            ++low;
        }
        while(low<high&&key>=a[low]){
            ++low;
        }
        if(key<a[low]){
            a[high]=a[low];
            --high;
        }
    }
    a[low]=key;
    QuickSort(a,i,low-1);
    QuickSort(a,low+1,j);
}