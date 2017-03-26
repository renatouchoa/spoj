/**
 * http://br.spoj.com/problems/PRIMO/
 */

#include <stdio.h>
#include <math.h>

int main()
{
    long int n,
             count;

    scanf("%ld", &n);

    n = abs(n);

    if (n == 0 || n == 1) {
        printf("sim");
    }

    count = 2;

    while ((float)count <= sqrt(n)) {
        if ((n % count) == 0) {
            printf("nao");
            return 0;
        }
        count++;
    }

    printf("sim");
    return 0;
}