/* 
SEL0456 - Desenvolvimento de Software Livre
Arquivo MAIN do Trabalho 1

Author: Ryan Fellipe Silva Costa - ryanfellipe2001@usp.br
n°USP: 11953369
Micro 04
*/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include"Soma.h"
#include"Elev2.h"
#include"Media.h"


int main(){
    
    int tam_vet;
    // Usuário define o tamanho do vetor
    printf("Digite o tamanho do seu vetor no intervalo de [1-20]\n");
    scanf("%d", &tam_vet);
    
    if(tam_vet<1 || tam_vet>20){
        printf("Entrada Invalida.\nDigite um valor no intervalo de [1-20]\n");
        return 0;
    }
    double meuVetor[tam_vet];

    srand(time(NULL));

    for (int i = 0; i < tam_vet; i++) {
        // Gera um valor aleatório entre 0 e 10
        meuVetor[i] = ((double)rand() / RAND_MAX) * 10;
    }

    //Imprime o vetor gerado
    printf("Vetor gerado aleatoriamente:\n");
    for (int i = 0; i < tam_vet; i++) {
        printf("%.2f ", meuVetor[i]);
    }
    printf("\n");
    //Chama as funções criadas
    double* vetorElevadoAoQuadrado = Elev_2(tam_vet, meuVetor);
    Soma(tam_vet, meuVetor);
    Media(tam_vet, meuVetor);

    // Libera a memória alocada dinamicamente
    free(vetorElevadoAoQuadrado);
    
    //valor de retorno para a função principal
    //indicando que o programa acabou
    return 0;
}