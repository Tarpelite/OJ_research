#include <stdio.h>

int a[10000010],n;
void quicksort(int left, int right) {
	int i, j, t, temp;
	if(left > right)
		return;
    temp = a[left];
    i = left;
    j = right;
    while(i != j) {
    	while(a[j] <= temp && i < j)
    		j--;
    	while(a[i] >= temp && i < j)
    		i++;
    	if(i < j)
    	{
    		t = a[i];
    		a[i] = a[j];
    		a[j] = t;
    	}
    }
    a[left] = a[i];
    a[i] = temp;
    quicksort(left, i-1);
    quicksort(i+1, right);
}

int main() {
	int i,cnt=0,s,x,k;
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
		scanf("%d", &a[i]);
    scanf ("%d",&k);
    quicksort(1, n);
    for (i=2;i<=n;i++)
    {
        if (a[i]!=a[i-1])
            cnt++;
        if (cnt==k)
        {
            printf ("%d ",a[i-1]);
            s=i-1;
            break;
        }
    }
    for (i=s;a[i]==a[i-1];i--);
    x=s-i+1;
    printf ("%d",x);
    return 0;

}