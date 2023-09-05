#define MAX 5
struct pilha{
	int elementos[MAX];
	int topo;
};

typedef struct pilha Pilha;

void inicia(Pilha*p);
void empilha(Pilha*p,int x);
int desempilha(Pilha*p);
void exibir(Pilha p);
