#include <stdio.h>

float potencia(int base, int exp){
    int i;
    float resultado = 1;

    int qtdeIteracoes = (exp >= 0 ? exp : exp * -1);

    for (i = 0; i < qtdeIteracoes; i++){
        resultado *= base;
    }
    return (exp >= 0 ? resultado : 1 / resultado);
}

int main(){
    int base = 3;
    int exp = 2;

    int resultado = potencia(base, exp);
    printf("3^3: %.2f\n", potencia(3, 3));
}