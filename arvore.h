
#ifndef ARVORE_H
#define	ARVORE_H

typedef struct arvore
{
    float raiz;
    int bal;
    struct arvore *esq;
    struct arvore *dir;
    struct arvore *pai;
}arvore;

// Incializa árvore
arvore * criaArvore();
// Insere novo nó na árvore
void insereNo(arvore *A, float num);
// Remove nó da árvore
void removeNo(arvore *A,float num);
// troca valores(raiz) de dois nós
void trocaDados(arvore *a, arvore *b);
// Obter elemento da extrema direita
arvore *maisDireita(arvore *a);
// Obter elemento da extrema esquerda
arvore *maisEsquerda(arvore *a);
// Percorre árvore em ordem
void percorreOrdem (arvore *A);
// Percorre árvore em pré-ordem
void percorrePreOrdem(arvore *A);


#endif	/* ARVORE_H */
