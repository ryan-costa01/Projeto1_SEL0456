/* 
SEL0456 - Desenvolvimento de Software Livre
Arquivo MAIN do Trabalho 1

Author: Ryan Fellipe Silva Costa - ryanfellipe2001@usp.br
n°USP: 11953369
Micro 04
*/
#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

// Função que eleva ao quadrado cada elemento do vetor e retorna um novo vetor
double* Elev_2(int vet_tam, double vetor[]){

    //Aloca memoria para o vetor
    double* resultado = malloc(vet_tam * sizeof(double));
    if (resultado == NULL) {
        // Tratamento de erro caso a alocação de memória falhe
        perror("Erro na alocação de memória");
        exit(EXIT_FAILURE);
    }
    //eleva os termos do vetor ao quadrado
    for (int i = 0; i < vet_tam; i++) {
        resultado[i] = pow(vetor[i], 2);
    }

    printf("Vetor elevado ao quadrado:\n");
    for (int i = 0; i < vet_tam; i++) {
        printf("%.2f ", resultado[i]);
    }
    printf("\n");
    
    return resultado;

}
// Função que calcula a média dos elementos do vetor
double  Media(int vet_tam, double vetor[]){
    double soma = 0.0;
    
    for (int i = 0; i < vet_tam; i++) {
        soma += vetor[i];
    }
    double media = soma/vet_tam;
    
    printf("A media dos valores do vetor:\n %.2f\n", media);

    return media;

}
// Função que soma todos os elementos do vetor
double Soma(int vet_tam, double vetor[]){
    
    double soma = 0.0;
    
    for (int i = 0; i < vet_tam; i++) {
        soma += vetor[i];
    }
    printf("A soma dos valores do vetor:\n %.2f\n", soma);
    return soma;
}

int main(){

    int tam_vet;
    // Usuário define o tamanho do vetor
    printf("Digite o tamanho do seu vetor\n");
    scanf("%d", &tam_vet);
    
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