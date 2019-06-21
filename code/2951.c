#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h> 
int a[10000010],n,k,p;
void Qsort(int e[], int l, int h)
{
    if (h <= l) return;
    int i = l;
    int j = h + 1;
    int key = e[l];
    while (1)
    {
        while (e[++i] > key)
        {
            if (i == h){
                break;
            }
        }
        while (e[--j] < key)
        {
            if (j == l){
                break;
            }
        }
        if (i >= j) break;
        int temp = e[i];
        e[i] = e[j];
        e[j] = temp;
    }
    int temp = e[l];
    e[l] = e[j];
    e[j] = temp;
    Qsort(e, l, j - 1);
    Qsort(e, j + 1, h);
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