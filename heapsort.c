#include <stdio.h>
#include <time.h>
#define CLOCKS_PER_SEC

void heapsort(int a[], int n) {
   int i = n / 2, pai, filho, t;
   while(true) {
      if (i > 0) {
          i--;
          t = a[i];
      } else {
          n--;
          if (n == 0) return;
          t = a[n];
          a[n] = a[0];
      }
      pai = i;
      filho = i * 2 + 1;
      while (filho < n) {
          if ((filho + 1 < n)  &&  (a[filho + 1] > a[filho]))
              filho++;
          if (a[filho] > t) {
             a[pai] = a[filho];
             pai = filho;
             filho = pai * 2 + 1;
          } else {
             break;
          }
      }
      a[pai] = t;
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
