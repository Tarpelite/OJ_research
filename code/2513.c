#include<stdio.h>
void selectSort(int a[],int n);
int max(int x[],int n);
int a[10000000];

void quicksort(int left, int right) {

	int i, j, t, temp;

	if(left > right)

		return;

    temp = a[left]; //temp中存的就是基准数

    i = left;

    j = right;

    while(i != j) { //顺序很重要，要先从右边开始找

    	while(a[j] >= temp && i < j)

    		j--;

    	while(a[i] <= temp && i < j)//再找右边的

    		i++;       

    	if(i < j)//交换两个数在数组中的位置

    	{

    		t = a[i];

    		a[i] = a[j];

    		a[j] = t;

    	}

    }

    //最终将基准数归位

    a[left] = a[i];

    a[i] = temp;

    quicksort(left, i-1);//继续处理左边的，这里是一个递归的过程

    quicksort(i+1, right);//继续处理右边的 ，这里是一个递归的过程

}

int main() 
{

    int n,k,i,num=0,x,y,shu=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	scanf("%d",&k);

    quicksort(0, n-1); //快速排序调用

    x=a[n-1];
	y=x;
	i=n-2;
	while(num!=k)
	{
		shu=1;
		if(a[i]==x)
		{
			shu++;
			i--;
			while(a[i]==x)
			{
				shu++;
				i--;
			}
			num++;
		}
		else
		{
			num++;
		}
		y=x;
		x=a[i];
		i--;
	}
	
	printf("%d %d",y,shu);

    return 0;

}