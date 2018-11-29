/*#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"
#include "avl.h"
#include "Fila.h"

// Criar árvore
arvore * criaArvore(){
    arvore *sentinela;
    sentinela = (arvore*)calloc (1,sizeof(arvore));
    // Valor da sentinela é muito diferente
    sentinela->raiz = -1000;
    sentinela->esq = NULL;
    sentinela->dir = NULL;
    sentinela->pai = NULL;
    return sentinela;
}

// Inserir novo nó
void insereNo(arvore *A, float num){
    arvore *novoNo, *aux, *auxPai;
    // Criando novo nó
    novoNo = (arvore*)calloc(1,sizeof(arvore));
    novoNo->raiz = num;
    novoNo->esq = NULL;
    novoNo->dir = NULL;
    novoNo->pai = NULL;
    novoNo->bal=0;

    // Caso não existam nós na árvore
    if (A->dir == NULL){
        A->dir = novoNo;
        novoNo->pai = A;
        return;
    }

    aux = A->dir;

    // Percorre a árvore até encontrar a posição correta no nó que será inserido
    while (aux != NULL)
    {
        auxPai = aux;
        if (num < aux->raiz)
            aux = aux->esq;
        else
            aux = aux->dir;
    }

    // Inserir à esquerda do pai
    if (num < auxPai->raiz)
        auxPai->esq = novoNo;

    // Inserir à direita do pai
    else
        auxPai->dir = novoNo;

    // Definir novo pai
    novoNo->pai = auxPai;

    // Atualizar FB
    atualizaBal(novoNo->pai,num);
}

// Remove nó
void removeNo(arvore *A,float num){
    if(!A){
        return;
    }

    // Variável que recebe o pai do elemento que será removido
    arvore *npai;

    // Caso o elemento seja igual ao valor do nó
    if(A->raiz == num){

        // Guardar o valor do pai do nó que será removido
        npai = A->pai;

        // Se o nó não possui filhos
        if(A->dir == NULL && A->esq == NULL){
            if(A->raiz < npai->raiz){
                npai->esq=NULL;
            }else{
                npai->dir=NULL;
            }
        }else{
            // Se o nó possui 1 filho
            if(A->dir != NULL ^ A->esq != NULL){

                // Nó que será removido está a esquerda de seu pai
                if(A->raiz < npai->raiz){

                    // Verificar se o nó que será removido possui um filho à esquerda ou à direita
                    if(A->dir){
                        npai->esq=A->dir;
                    }else{
                        npai->esq=A->esq;
                    }

                    // Definir novo pai
                    npai->esq->pai=npai;

                // Filho que será removido está a direita de seu pai
                }else{

                    // Verificar se o nó que será removido possui um filho à esquerda ou à direita
                    if(A->dir){
                        npai->dir=A->dir;
                    }else{
                        npai->dir=A->esq;
                    }

                    // Definir novo pai
                    npai->dir->pai=npai;
                }

            // Se o nó possui 2 filho
            }else{
                // Sucessor
                arvore *mEsq = maisEsquerda(A->dir);
                // Antecessor
                arvore *mDir = maisDireita(A->esq);
                A->raiz=mEsq->raiz;
                printf("A %d\nmEsq %d",A->raiz,mEsq->raiz);
                removeNo(mEsq, mEsq->raiz);
            }
        }
        atualizaBalRemocao(npai,num);

    // Caso não encontre o nó percorre a árvore recursivamente
    }else{
        if(num > (A->raiz)){
            removeNo(A->dir, num);
	}else{
            removeNo(A->esq, num);
        }
    }
}

// Trocar valores
void trocaDados(arvore *a, arvore *b){
    int x = a->raiz;
    a->raiz = b->raiz;
    b->raiz = x;
}

// Obter elemento da extrema direita
arvore *maisDireita(arvore *a){
	arvore *aux = a;
	while(aux->dir) aux = aux->dir;
	return aux;
}

// Obter elemento da extrema esquerda
arvore *maisEsquerda(arvore *a){
	arvore *aux = a;
	while(aux->esq) aux = aux->esq;
	return aux;
}

// Ordem
void percorreOrdem (arvore *A){
    if(A!=NULL){
        percorreOrdem(A->esq);
        printf(" %d ", A->raiz);
        percorreOrdem(A->dir);
    }
}

// PreOrdem
void percorrePreOrdem(arvore *A){
    if(A!=NULL){
        printf(" %d ", A->raiz);
        percorrePreOrdem(A->esq);
        percorrePreOrdem(A->dir);
    }
}
*/
