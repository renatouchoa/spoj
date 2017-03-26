/**
 * http://br.spoj.com/problems/RECUPERA/
 */

#include <stdio.h>

#define NOTFOUND -9999

int main()
{
    int n,
        a,
        ak,
        instancia = 1,
        count,
        soma;

    while(scanf("%d", &n) == 1) {

        soma = 0;
        ak   = NOTFOUND;

        for(count = 0; count < n; count++) {
            scanf("%d", &a);
            if (ak == NOTFOUND && soma == a) {
                ak = a;
            } else {
                soma += a;
            }
        }

        printf("Instancia %d\n", instancia++);

        if (ak == NOTFOUND) {
            printf("nao achei\n\n");
        } else {
            printf("%d\n\n", ak);
        }

    }

    return 0;
}