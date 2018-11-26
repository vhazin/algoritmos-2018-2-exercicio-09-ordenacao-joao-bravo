#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CLOCKS_PER_SEC

void insertion_sort(int vetor[], int tamanhoVetor) {

int escolhido, j;

    for (int i = 1; i < tamanhoVetor; i++) {
		escolhido = vetor[i];
		j = i - 1;
		
		while ((j >= 0) && (vetor[j] > escolhido)) {
			vetor[j + 1] = vetor[j];
			j--;
		}
		
		vetor[j + 1] = escolhido;
	}
}

int main (void){
    clock_t inicio, fim;
    float tempo_final;
    int vetor[];

    printf("Digite os números que iram ser ordenados com um espaço separando cada um deles: ");
    scanf("%d", &vetor[]);
    inicio = clock();
    insertion_sort();
    fim = clock();
    tempo_final = fim - inicio;
    printf(tempo_final/CLOCKS_PER_SEC);
}
