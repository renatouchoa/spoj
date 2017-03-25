/*
 * http://br.spoj.com/problems/FATORIA2/
 */

#include <stdio.h>

int main()
{
    int n, fatorial;

    scanf("%d", &n);

    if (n == 0) {
        fatorial = 1;
    } else {
        fatorial = n;
        while (--n > 0) fatorial *= n;
    }

    printf("%d", fatorial);

    return 0;
}