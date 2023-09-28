/* 
SEL0456 - Desenvolvimento de Software Livre
Arquivo da função 'Média' do Trabalho 1

Author: Ryan Fellipe Silva Costa - ryanfellipe2001@usp.br
n°USP: 11953369
Micro 04
*/
#include <stdio.h>


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