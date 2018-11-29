#ifndef HEAP_H_INCLUDED
#define HEAP_H_INCLUDED



#endif // HEAP_H_INCLUDED

typedef struct {

  struct Drone* A;
  int tamanhoAtual;
  int tamanhoMaximo;
} HEAP;

typedef int bool;

void inicializarHeap(HEAP * h, int tamanhoMax);
void destruirHeap(HEAP * h);
int pai(int i);
int filhoEsquerda(int i);
int filhoDireita(int i);
void maxHeapify(HEAP * h, int i);
void construirHeapMaximo(HEAP * h);
bool inserirForaDeOrdem(HEAP * h, struct Drone valor);
void imprimirPeso(HEAP h, float peso);
void imprimirArranjo(HEAP h);
void print_drone (struct drone d);
void heapSort(HEAP * h);
bool inserirHeap(HEAP * h, struct Drone chave);
int percursoPreOrdem(HEAP* h, int atual);
int alturaHeap(HEAP* h);
void deleta(HEAP * h, int posicao);
void heapify_down(HEAP * h, int v);
