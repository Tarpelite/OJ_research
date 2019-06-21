#include<stdio.h>
#include<math.h>
#include <string.h>
#include<stdlib.h>
int a[10000001] = { 0 }, b[10000001] = { 0 };

int cmp(const void*a, const void*b){
    return *(int*)b - *(int*)a;
}

int main(){
    int i, j, n, t, k, f = 0;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

        scanf("%d", &k);
        qsort(a, n, sizeof(int), cmp);
        b[0] = a[0];
        j = 1;

        for(i = 0; i < n; i++){
            if (b[j - 1] == a[i]) {
                continue;
                }
            b[j] = a[i]; j++;
        }

        for (i =0; i < n; i++){
            if (b[k - 1] == a[i])f++;
        }


    printf("%d %d", b[k-1], f); }