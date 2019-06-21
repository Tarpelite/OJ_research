#include<stdio.h>
#include<stdlib.h>
int comp(const void*a,const void*b)//用来做比较的函数。
{
    return *(int*)a-*(int*)b;
}
int a[100000000];
int main()
{

    int n,i,k,c=1,j,s;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    qsort(a,n,sizeof(int),comp);//调用qsort排序
    for(i=n-1;i>=1;i--)//输出排序后的数组
    {
        if(c==k){
            s=1;
            for(j=i;j>=1;j--){
                if(a[j-1]==a[j]){
                    s++;
                }
                else{
                    break;
                }

            }
            printf("%d %d",a[i],s);
            break;
        }
        if(a[i]>a[i-1]){
            c++;
        }
    }
    return 0;
}