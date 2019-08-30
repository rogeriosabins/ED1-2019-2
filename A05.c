#include <stdio.h>
#include <stdlib.h>
/*Exercício 01
Escreva uma função que crie um clone de um determinado vetor. Desenvolva duas versões desta função:*/


void vetor_clone(int *v, int tam, int *copia){
     for(int i=0; i<tam; i++){
        copia[i]=v[i];    
        printf("%d ",copia[i]);}
}

/*Escreva uma função que crie um vetor preenchido com valores aleatórios.*/
void vetor_aleatorio(int *v, int tam){
     for(int i=0; i<tam; i++)
        v[i]=rand()%tam;    
        for(int i=0; i<tam; i++)
        printf("%d ",v[i]); 
}
//Escreva uma função que dado um vetor, adicione 1 ao valor de cada elemento.

void add1(int *v, int tam){
    for(int i = 0; i < tam; i++){
        v[i] = +1;
        printf("%d ",v[i]);
    }

}

//Escreva uma função que dado um vetor, dobre o valor de cada elemento.

void vetor_dobra(int *v1, int tam){
    for(int i = 0; i < tam; i++){
        v1[i] = v1[i]*2;
        printf("%d ",v1[i]);
    }

}




int main(){
  int tam = 5;
 int v[] = {1,1,1,1,2};
 int copia[tam];
vetor_clone(v, tam, &copia);
 printf("\n");
 //vetor_aleatorio(v, tam);
 printf("\n");
 //add1(v, 10);
 printf("\n");
 //vetor_dobra(v, 5);
 printf("\n");
}