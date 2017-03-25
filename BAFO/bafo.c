/**
 * http://br.spoj.com/problems/BAFO/
 */

#include <stdio.h>

int main()
{
    int rodadas,
        aldo,
        beto,
        total_aldo,
        total_beto,
        teste = 1;

    while(1) {

        scanf("%d", &rodadas);
        if (rodadas == 0) break;

        total_aldo = total_beto = 0;

        while(rodadas-- > 0) {
            scanf("%d%d", &aldo, &beto);
            total_aldo += aldo;
            total_beto += beto;
        }

        printf("\nTeste %d\n", teste++);

        if(total_aldo > total_beto) {
            printf("Aldo\n");
        } else {
            printf("Beto\n");
        }
    }

    return 0;
}