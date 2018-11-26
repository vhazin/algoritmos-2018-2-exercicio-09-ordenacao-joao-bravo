#include <stdio.h>
#include <time.h>
#define CLOCKS_PER_SEC

void selection_sort(int num[], int tam) { 
  int i, j, min, aux;
  for (i = 0; i < (tam-1); i++) 
  {
     min = i;
     for (j = (i+1); j < tam; j++) {
       if(num[j] < num[min]) 
         min = j;
     }
     if (num[i] != num[min]) {
       aux = num[i];
       num[i] = num[min];
       num[min] = aux;
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
  selection_sort();
  fim = clock();
  tempo_final = fim - inicio;
  printf(tempo_final/CLOCKS_PER_SEC);
}
