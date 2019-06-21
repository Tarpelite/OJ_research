#include <stdio.h>
#include <math.h>

int zs(int);

int main()
{
    int n, i;
    scanf ("%d", &n);

    for (i = n + 1; ; ++i){
        if (i == 2){
            printf ("2");
            break;
        }

        else if (zs(i)){
        printf ("%d", i);
        break;
        }
    }

    return 0;
}

int zs(int n){
    int i;
    for (i = 2; i <= (int)sqrt(n) + 1; ++i){
        if (n % i == 0){
            return 0;
            break;
        }
    }
    return 1;
}