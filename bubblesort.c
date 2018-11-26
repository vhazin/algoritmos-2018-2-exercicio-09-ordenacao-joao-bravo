#include <stdio.h>
#include <time.h>
#define CLOCKS_PER_SEC

void bubbleSort(int* vetor, int tamanho) {
	int i, j, temp;

	for (i = 0; i < tamanho - 1; i++){
        for (j = (i+1); j < tamanho; j++){
            if (vetor[j] < vetor[i]){
                       temp = vetor[i];
                       vetor[i] = vetor[j];
                       vetor[j] = temp;
                }
            }
    }
}

int main (void){
    clock_t inicio, fim;
    float tempo_final;
    int vetor[];

    printf("Digite os números que iram ser ordenados com um espaço separando cada um deles: ");
    scanf("%d", &vetor[]);
    inicio = clock();
    bubbleSort();
    fim = clock();
    tempo_final = fim - inicio;
    printf(tempo_final/CLOCKS_PER_SEC);
}
