typedef struct{
  int* vetor;
  int size;
  int length;
  }Vetor;

  typedef int DataType;
  typedef enum {false, true} Boolean;

  Vetor* vetor_new(){
    Vetor *v = (Vetor*)calloc(1, sizeof(Vetor));
    v->vetor = (int*)calloc(10,sizeof(int));
    v->size = 10;
    v->length = 0;
    return v;
  }

  void vetor_free(Vetor* v){
    free(v->vetor);
    free(v);
  }

  void vetor_print(Vetor* v){
    for(int i=0; i<v->size; i++){
      printf("%d ", v->vetor[i]);
    }
  }