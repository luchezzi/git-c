#include <stdio.h>
#include <stdlib.h>

#define MAX 15


typedef struct{
  int chave;
  int altura;
  float peso;
} REGISTRO;

typedef struct {
  REGISTRO vet[MAX+1];
  int numElem;
} LISTA;

void startList(LISTA* list){
    list->numElem =0;
}

int cadastarElemLista(LISTA* l, REGISTRO reg, int i){
    int j;
    if ((l->numElem >= MAX) || (i < 0) ||(i > l-> numElem)) {
        return (0);
    }
    for (j=l->numElem; j>i; j--){
        l->vet[j-1];
    }
    l->vet[i] = reg;
    l->numElem++;
    return 1;
}


void listagem(LISTA* list){
    int i;

    printf("Chave: \"");
    for (i=0; i < list->numElem; i++)
    {
        printf("%i ", list->vet[i].chave);
    }
    printf("\" \n\n");



    printf("Altura: \"");
    for (i=0; i < list->numElem; i++)
    {
        printf("%i ", list->vet[i].altura);
    }
    printf("\" \n\n");

    
    
    printf("Peso: \"");
    for (i=0; i < list->numElem; i++)
    {
        printf("%.1f ", list->vet[i].peso);
    }
    printf("\" \n\n");
    
}

int main()
{
    /* code */
    LISTA regs;
    startList(&regs); 
    REGISTRO reg;

    /*
    regs.vet[0].chave=1;
    regs.vet[0].altura =180;
    regs.vet[0].peso =80;

    regs.vet[1].chave=3;
    regs.vet[1].altura =179;
    regs.vet[1].peso =98;
    
    regs.numElem = 2;
    */

    reg.chave = 1;
    reg.altura = 187;
    reg.peso = 87.6;
    
    cadastarElemLista(&regs, reg, 0);
    listagem(&regs);
    return 0;
}