#include <stdio.h>

struct Fila {

	int capacidade;
	float *dados;
	int primeiro;
	int ultimo;
	int nItens; 

};

void criarFila( struct Fila *f, int c ) { 

	f->capacidade = c;
	f->dados = (float*) malloc (f->capacidade * sizeof(float));
	f->primeiro = 0;
	f->ultimo = -1;
	f->nItens = 0; 

}

void inserir(struct Fila *f, int v) {

	if(f->ultimo == f->capacidade-1)
		f->ultimo = -1;

	f->ultimo++;
	f->dados[f->ultimo] = v;
	f->nItens++;

}

int remover( struct Fila *f ) { 

	int temp = f->dados[f->primeiro++]; 

	if(f->primeiro == f->capacidade)
		f->primeiro = 0;

	f->nItens--; 
	return temp;

}

int estaVazia( struct Fila *f ) { 

	return (f->nItens==0);

}

int estaCheia( struct Fila *f ) { 

	return (f->nItens == f->capacidade);
}

void mostrarFila(struct Fila *f){

	int cont, i;

	for ( cont=0, i= f->primeiro; cont < f->nItens; cont++){

		printf("%.2f\t",f->dados[i++]);

		if (i == f->capacidade)
			i=0;

	}
	printf("\n\n");

}

void main () {

	int opcao, capa;
	float valor;
	struct Fila umaFila;

	
	printf("\nTamanho da fila? ");
	scanf("%d",&capa);
	criarFila(&umaFila, capa);

	
	while( 1 ){

		printf("\n[1]- Inserir elemento\n");
        printf("\n[2]- Remover Elemento\n");
        printf("\n[3]- Imprimir Fila\n");
        printf("\n[0]- Sair\n");

		scanf("%d", &opcao);

		switch(opcao){

			case 0: exit(0);

			case 1:
				if (estaCheia(&umaFila)){

					printf("\nFila Cheia!!!\n\n");

				}
				else {

					printf("\nInforme o valor a ser inserido:  ");
					scanf("%f", &valor);
					inserir(&umaFila,valor);

				}

				break;

			case 2: 
				if (estaVazia(&umaFila)){

					printf("\nFila vazia!!!\n\n");

				}
				else {

					valor = remover(&umaFila);
					printf("\n%1f removido com sucesso\n\n", valor) ; 

				}
				break;

				case 3:
					if (estaVazia(&umaFila)){

						printf("\nFila vazia!!!\n\n");

					}
					else {

						printf("\nConteudo -> ");
						mostrarFila(&umaFila);

					}
					break;

				default:
					printf("\nOpcao Invalida\n\n");

		}
	}
}