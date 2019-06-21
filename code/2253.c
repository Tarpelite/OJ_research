#include<stdio.h>
int n;
int a[10000000];
int kmax(int *ar,int);
int ktimes(int *ar,int);

int cmp(const void*a,const void*b)//降序，qsort函数默认升序，而实现升序规则只需调换成a-b的形式即可
{
	return *(int*)b-*(int*)a;
}
int main()
{
    int k,i=0,j=0,t;
    scanf("%d",&n);


    while(i<n){
        scanf("%d",&a[i]);
        i++;
    }

    scanf("%d",&k);


    qsort(a,n,sizeof(int),cmp);


    printf("%d %d",kmax(a,k),ktimes(a,kmax(a,k)));

    return 0;
}

int kmax(int *ar,int x)
{
    int i=0,j=0;
    for(i=0;i<x;i++){
        if(ar[i]==ar[i+1]){
            x++;

        }
    }
    return ar[x-1];
}

int ktimes(int *ar,int y)
{
    int i=0,j=0;

    for(i=0;i<n;i++){
        if(ar[i]==y){
            j++;
        }
    }
    return j;
}