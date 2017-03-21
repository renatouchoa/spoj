/*
 * http://br.spoj.com/problems/SOMA/
 */

#include <stdio.h>

int main()
{
    int n, x, soma = 0;

    scanf("%d", &n);

    while (n > 0) {
        scanf("%d", &x);
        soma += x;
        n--;
    }

    printf("%d", soma);

    return 0;
}