/* 
SEL0456 - Desenvolvimento de Software Livre
Arquivo da função 'Elevar ao Quadrado' do Trabalho 1

Author: Ryan Fellipe Silva Costa - ryanfellipe2001@usp.br
n°USP: 11953369
Micro 04
*/
#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include "Elev2.h"

// Função que eleva ao quadrado cada elemento do vetor e retorna um novo vetor
double* Elev_2(int vet_tam, double vetor[]){

    double* resultado = malloc(vet_tam * sizeof(double));
    if (resultado == NULL) {
        // Tratamento de erro caso a alocação de memória falhe
        perror("Erro na alocação de memória");
        exit(EXIT_FAILURE);
    }
    
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