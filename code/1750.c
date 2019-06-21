#include<stdio.h>



int main()
{
    int n, k, min, max, ans, b1, b2;
    scanf("%d %d", &n, &k);
    int a[n], i, l[k], r[k], j[k];
    for(i = 0 ; i < n ; i++){
        scanf("%d", &a[i]);
    }
    for(i = 1 ; i <= k ; i++){
        scanf("%d %d", &l[i], &r[i]);
    }

int N(int x,int y)
{
   int sum = 0, j, ans;
   for(j = x ; j <= y ; j++){
    sum += a[j];
   }
   ans = sum % n;
   return ans;
}

int M(int x,int y)
{
   int ji = 1, j, ans;
   for(j = x ; j <= y ; j++){
    ji = (ji * a[j]) % n;
   }
   ans = ji;
   return ans;
}

int H(int x,int y)
{
   int j, ans;
   ans = a[x];
   for(j = x+1 ; j <= y ; j++){
    ans = ans ^ a[j];
   }
   return ans;
}

    for(i = 1 ; i <= k ; i++){
        b1 = N(l[i],r[i]);
        b2 = M(l[i],r[i]);
        if(b1 <= b2){min = b1; max = b2;}
        else{min = b2; max = b1;}
        ans = H(min, max);
        printf("%d\n", ans);
    }
    return 0;
}