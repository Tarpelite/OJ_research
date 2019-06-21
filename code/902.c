#include<stdio.h>
int main()
{
    int a,b=0,i,k,n,r;
    int arr1[100000]={0};
    int arr2[100000]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        arr1[a]=a;
        if(arr1[a]!=0)
            arr2[a]=arr2[a]+1;
    }
    scanf("%d",&k);
    for(r=99999;r>=0;r--){
        if(arr1[r]!=0)
            b+=1;
        if(b==k)
            break;
    }
    printf("%d %d",arr1[r],arr2[r]);
    return 0;
}