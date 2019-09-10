#include <stdio.h>
#include <stdlib.h>

typedef struct{
int** mat;
int linhas;
int colunas;
}Matriz;

//OPERAÇÕES (PROTÓTIPOS)

Matriz *matriz_cria(int linhas, int colunas);
void matriz_atribui(Matriz *m, int lin, int col, int valor);
int matriz_acessa1(Matriz *m, int lin, int col);
void matriz_acessa2(Matriz *m, int lin, int col, int *end);
void matriz_imprime(Matriz *m);
void matriz_destroi(Matriz *m);

//OPERAÇÕES (IMPLEMENTAÇÃO)

Matriz *matriz_cria(int linhas, int colunas){
    Matriz *m = (Matriz *)malloc(sizeof(Matriz));
    m->mat = (int **)calloc(linhas, sizeof(int *));
    int i;
    for (i = 0; i < linhas; i++){
        m->mat[i] = (int *)calloc(colunas, sizeof(int));
    }
    m->linhas = linhas;
    (*m).colunas = colunas;

    return m;
}

void matriz_destroi(Matriz *m){
    free(m->mat);
    free(m);
}

void matriz_atribui(Matriz *m, int lin, int col, int valor){
  m->mat[lin][col] = valor;
}
void funcao(Matriz *m){
    for ( int i = 0; i < m->linhas; i++){
            for ( int j = 0; j < m->colunas; j++){
            *m->mat[i][j] = m->mat[i][j] * 1;
            }
    }
}


void matriz_map1(Matriz* m, void (*funcao)(int*)){
  for ( int i = 0; i < m->linhas; i++){
            for ( int j = 0; j < m->colunas; j++){
              funcao(&m->mat[i][j]);
        }
     }
}

int matriz_linhas(Matriz* m){
  int count = 0;
  for ( int i = 0; i < m->linhas; i++){
    count++;
  }
  return count;
}
int matriz_colunas(Matriz* m){
  int count = 0;
  for ( int i = 0; i < m->colunas; i++){
    count++;
  }
  return count;
}

void matriz_imprime(Matriz *m){
          for ( int i = 0; i < m->linhas; i++){
            for ( int j = 0; j < m->colunas; j++){
            printf("%d ",m->mat[i][j]);
    }
    printf("\n");
   }
}