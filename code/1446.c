#include<stdio.h>
#include<math.h>
#include<string.h> 
int a[10000010],n,k,p;

void S(int qwe[], int l, int h)
{
    if (h <= l) return;
    int i = l;
    int j = h + 1;
    int key = qwe[l];
    while (1)
    {
        while (qwe[++i] > key)
        {
            if (i == h){
                break;
            }
        }
        while (qwe[--j] < key)
        {
            if (j == l){
                break;
            }
        }
        if (i >= j) break;
        int temp = qwe[i];
        qwe[i] = qwe[j];
        qwe[j] = temp;
    }
    int temp = qwe[l];
    qwe[l] = qwe[j];
    qwe[j] = temp;
    S(qwe, l, j - 1);
    S(qwe, j + 1, h);
}

int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	S(a,1,n);
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