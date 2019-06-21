#include<stdio.h>
#include<math.h>
int main()
{
    int n, m, num=0;
    scanf("%d", &n);
    int i=n,j;
    while (num==0){
        int is_prime=1;
        i++;

        for (j=2;j<i;j++){
            if (i % j == 0){
                is_prime=0;
                break;
            }
        }


        if (is_prime){
            num++;
        }
     }
    if (num == 1){
        printf("%d", i);
    }
    return 0;
}