#include <stdio.h>
#include <time.h>
#define CLOCKS_PER_SEC

void quick_sort(int *a, int left, int right);
 
int main(int argc, char** argv)
{
 int i, vet[MAX];
 clock_t inicio, fim;
 float tempo_final;
 int vetor[];
 
 // Lê MAX ou 10 valores
 for(i = 0; i < MAX; i++)
 {
  printf("Digite os números que você deseja ordenar separados por espaço: ");
  scanf("%d", &vet[i]);
 }
 
 // Ordena os valores
 quick_sort(vet, 0, MAX - 1);
 
 printf("Valores ordenados\n");
 for(i = 0; i < MAX; i++)
 {
  printf("%d\n", vet[i]);
 }

 inicio = clock();
 quick_sort();
 fim = clock();
 tempo_final = fim - inicio;
 printf(tempo_final/CLOCKS_PER_SEC);
 
 system("pause");
 return 0;
}
 
// Função de Ordenação por Seleção
void quick_sort(int *a, int left, int right) {
    int i, j, x, y;
     
    i = left;
    j = right;
    x = a[(left + right) / 2];
     
    while(i <= j) {
        while(a[i] < x && i < right) {
            i++;
        }
        while(a[j] > x && j > left) {
            j--;
        }
        if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > left) {
        quick_sort(a, left, j);
    }
    if(i < right) {
        quick_sort(a, i, right);
    }
}
