#include <stdio.h>
#include "TAD-matriz1.h"

int main(void) {
    Matriz *m1 = matriz_cria(2, 3);

    matriz_atribui(m1, 1, 1, 7);
    matriz_atribui(m1, 0, 0, 1);
    matriz_atribui(m1, 0, 1, 2);

    matriz_imprime(m1);
    printf("\n");
  
    //matriz_destroi(m1);
    //matriz_imprime(m1);
    printf("\n");
    printf("linhas: %d",matriz_linhas(m1));
    printf("\n");
    printf("colunas: %d",matriz_colunas(m1));

    //matriz_map1(m1, 2);
}