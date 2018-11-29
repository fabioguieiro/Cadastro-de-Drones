#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

struct Drone //TAD para drone
{
    float peso;
    char fabricante[41];
    char modelo[21];
    float cap_mAH;
    char tempoar[9];
};

struct Fila //TAD para fila
{
    int size;
    struct node* head, *tail;
} ;

struct node //Nó da fila
{
    struct  Drone drone;
    struct node* next;
} ;

typedef struct Fila* Fila;
typedef struct Drone Drone;
Fila q_new() ;
void q_free(Fila) ;
void q_enqueue( const Fila, float peso,char* fabricante,char* modelo,float cap_mAH,char* tempoar ) ;
struct Drone q_dequeue( const Fila) ;
void q_imprime(const Fila f);
int q_isEmpty( const Fila) ;
int q_size(Fila) ;
int q_remove(const Fila f,float peso);
int q_pesquisa(const Fila f,float peso);
float q_encontra_maior_tempoar(const Fila f);
void q_imprime_tempoar_max(const Fila f);
void q_estatisticas(const Fila f);
float charParaTempoTotal(char* valor);
float converteNumeroDuasCasas(char primeiro,char segundo,float fatorTempo);
int charParaValor(char valor);
void imprime_drone(struct Drone d);

#endif / / FILA_H_INCLUDED
