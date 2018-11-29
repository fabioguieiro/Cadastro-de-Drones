#include "Fila.h"

typedef struct NO* ArvAVL;

ArvAVL* cria_ArvAVL();
void libera_ArvAVL(ArvAVL *raiz);
int insere_ArvAVL(ArvAVL *raiz, struct Drone drone);
int remove_ArvAVL(ArvAVL *raiz, float valor);
int estaVazia_ArvAVL(ArvAVL *raiz);
int altura_ArvAVL(ArvAVL *raiz);
int totalNO_ArvAVL(ArvAVL *raiz);
int consulta_ArvAVL(ArvAVL *raiz, float valor);
void preOrdem_ArvAVL(ArvAVL *raiz);
void emOrdem_ArvAVL(ArvAVL *raiz);
void posOrdem_ArvAVL(ArvAVL *raiz);



/*
// Rotação a esquerda
void leftRotate(arvore *x);
// Rotação a direita
void rightRotate(arvore *x);
// Realiza as rotações necessárias avaliando os fatores de balanceamento, em caso de rotação dupla atualiza o balanceamento do nó que desbalanceou dependendo do valor do neto
void balanceamento(arvore *no);
//atualiza o FB até chegar na raiz ou até realizar rotações
void atualizaBal(arvore *no,float num);
// Realiza as rotações necessárias avaliando os fatores de balanceamento e atualiza o FB dos envolvidos em rotações tanto simples quanto dupla
void balanceamentoRemocao(arvore * no);
//atualiza o FB até chegar na raiz, ou encontrar o FB = 1 ou -1 do nó que desbalanceou a árvore após o balanceamento desta
void atualizaBalRemocao(arvore *no,float num);
#endif	/* AVL_H */

