#include<stdio.h>
#include<malloc.h>
void quick_sort(int s[],int l,int r)
{
    if(l < r)
    {
        int i=l,j=r,x=s[l];
        while(i<j)
        {
            while(i<j&&s[j]<=x)
                j--;
            if(i<j)
                s[i++]=s[j];
            while(i<j&&s[i]>=x)
                i++;
            if(i<j)
                s[j--]=s[i];
        }
        s[i]=x;
        quick_sort(s,l,i-1);
        quick_sort(s,i+1,r);
    }
}
void main()
{
    int dif=1,num=1,n,i,k,j,temp,flag,A,B;
    int *a=(int *)malloc(10000000*sizeof(int));
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    quick_sort(a,0,n);
    i=0;
    while(dif<=k&&i<n-1)
    {
        if(a[i]!=a[i+1])
            {dif++;
        if(dif==k)
            A=i;
        else if(dif==k+1)
            B=i;}
        i++;
    }
    printf("%d %d",a[i-1],B-A);
    free(a);
}