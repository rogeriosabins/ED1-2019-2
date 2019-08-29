#include <stdio.h>
#include <stdlib.h>

/*Exercício 01
Escreva uma função para imprimir um vetor. A impressão deve ter o seguinte formato: */

void imprime(int *v, int tam){
  printf("[");
  for(int i=0; i<tam; i++){
    printf("%d, ", v[i]);
  }
  printf("]");
}
//------------------------------------------------------------------------
/*Exercício 02
Escreva uma função para criar um vetor dinamicamente com um determinado tamanho e preenche‒lo com um determinado valor.*/
typedef struct{
    int* v;
    int tamanho;
    int qtde;
}Vetor;

Vetor* vetor_criar(){
     Vetor* vetor = (Vetor*) calloc(1, sizeof(Vetor));
     vetor->v = (int*) calloc(10,sizeof(int));
     vetor->tamanho = 10;
     vetor->qtde = 0;

     return vetor;
}
void vetor_imprimir(Vetor* vetor){
    for(int i=0; i<vetor->qtde; i++){
         printf("%d ", vetor->v[i]);
    }
    printf("\n");
}
//-------------------------------------------------------------------------
/*Exercício 03
Escreva uma função que devolva o índice do maior elemento de um vetor.*/
int encontra_maior(int *v, int tam){
     int maior = v[0];

     for(int i=0; i<tam; i++){
          if(maior < v[i])
               maior = v[i];
     }
     return maior;
}
//--------------------------------------------------------------------------
/*Exercício 04
Escreva uma função para intercalar dois vetores. Assuma que os vetores recebidos já estão ordenados. */
int intercalar(int *v1, int *v2, int t1, int t2){
     int t = t1+t2;
     int v3[t1+t2];

     for(int i=0; i<t1; i++){
		v3[i] = v1[i];
	}
	for(int i=0; i<t2; i++){
		v3[t1] = v2[i];
    t1++;
	}
     int aux = v3[0];
     for(int i=0; i<t; i++){
          if(v3[i] < aux)
               v3[i] = aux;
     }
     printf("vetor intercalado:\n");
      imprime(v3, t);
}


//--------------------------------------------------------
int main(){
     int v1[] = {1, 2,3,4,5};
     int v2[] = {13,15,17,18,19};
     //int maior =  encontra_maior(v1, 5);
     // imprime(v1, 5);
     intercalar(v1,v2, 5, 5);

      printf("\n");
     // printf("maior: %d\n", maior);
}
