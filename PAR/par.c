/**
 * http://br.spoj.com/problems/PAR/
 */

#include <stdio.h>

int main()
{
    int partidas,
        dedos_a,
        dedos_b,
        teste = 1;

    char jogador_a[11],
         jogador_b[11];

    while(1) {
        
        scanf("%d", &partidas);
        if(partidas == 0) break;

        printf("\nTeste %d\n", teste++);

        scanf("%s%s", &jogador_a, &jogador_b);

        while(partidas-- > 0) {
            
            scanf("%d%d", &dedos_a, &dedos_b);

            if((dedos_a + dedos_b) % 2 == 0) {
                printf("%s\n", jogador_a);
            } else {
                printf("%s\n", jogador_b);
            }
        }
    }

    return 0;
}