/**
 * http://br.spoj.com/problems/OVERF09/
 */

#include <stdio.h>

int main()
{
    int maximo,
        termo1,
        termo2,
        resultado;

    char operacao;

    scanf("%d", &maximo);
    scanf("%d", &termo1);
    getchar();
    scanf("%c", &operacao);
    getchar();
    scanf("%d", &termo2);

    switch(operacao) {
        case '+':
            resultado = termo1 + termo2;
            break;
        case '*':
            resultado = termo1 * termo2;
            break;
    }

    if (resultado <= maximo) {
        printf("OK");
    } else {
        printf("OVERFLOW");
    }

    return 0;
}