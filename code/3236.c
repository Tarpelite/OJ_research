#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
    return *(int*)b-*(int *)a;
    }
    int a[10000002];
    int main()
    {
        int n,k,den=0,co=1,i;
        scanf("%d",&n);
        for( i=0;i<n;i++)
            scanf("%d",&a[i]);
        scanf("%d",&k); qsort(a,n,sizeof(a[0]),cmp);
        // for(int i=0;i<n;i++)printf("%d ",a[i]);
        for( i=0;i<k;)
            {
/*aksjdhgkjashdkjas
*/
                if(a[den]>a[den+1]){i++;}
        else if(i==(k-1))co++; den++;
        }
        den--;
        printf("%d %d",a[den],co);
        return 0;
        }