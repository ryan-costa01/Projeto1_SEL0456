/* 
SEL0456 - Desenvolvimento de Software Livre
Arquivo da função 'Soma' do Trabalho 1

Author: Ryan Fellipe Silva Costa - ryanfellipe2001@usp.br
n°USP: 11953369
Micro 04
*/
#include <stdio.h>
#include "Soma.h"

// Função que soma todos os elementos do vetor
double Soma(int vet_tam, double vetor[]){
    
    double soma = 0.0;
    
    for (int i = 0; i < vet_tam; i++) {
        soma += vetor[i];
    }
    
    printf("A soma dos valores do vetor:\n %.2f\n", soma);

    return soma;
}