#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10
#define MAX_VIEW_COUNT 3

// Função para trocar dois elementos
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função para aplicar o algoritmo Heap Sort
void heapSort(int arr[], int n) {
    // Construir o heap máximo
    for (int i = n / 2 - 1; i >= 0; i--) {
        int parent = i;
        int leftChild = 2 * parent + 1;
        int rightChild = 2 * parent + 2;
        int maxIndex = parent;
        if (leftChild < n && arr[leftChild] > arr[maxIndex])
            maxIndex = leftChild;
        if (rightChild < n && arr[rightChild] > arr[maxIndex])
            maxIndex = rightChild;
        if (maxIndex != parent) {
            swap(&arr[parent], &arr[maxIndex]);
            heapSort(arr, n); // Chamada recursiva para ajustar o sub-heap afetado
        }
    }
}

// Função para verificar se o array está classificado corretamente
int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1])
            return 0;
    }
    return 1;
}

// Função para imprimir o array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[ARRAY_SIZE] = { 2, 1, 3, 4, 5, 6, 7, 8, 9, 10 };
    int quit = 0;
    int viewCount = 0;

    printf("Bem-vindo ao jogo Heap Sort!\n");
    printf("Classifique os elementos do array de acordo com o algoritmo Heapsort.\n");
    printf("Array original: ");
    printArray(arr, ARRAY_SIZE);

    while (!isSorted(arr, ARRAY_SIZE) && !quit) {
        int index1, index2;
        printf("Digite os índices dos elementos a serem trocados (ou digite -1 para desistir): \n");
        scanf("%d", &index1);

        if (index1 == -1) {
            quit = 1;
        } else {
            scanf("%d", &index2);
            if (index1 >= 0 && index1 < ARRAY_SIZE && index2 >= 0 && index2 < ARRAY_SIZE) {
                swap(&arr[index1], &arr[index2]);
                

                if (viewCount >= MAX_VIEW_COUNT) {
                    printf("Você atingiu o número máximo de visualizações.\n");
                    printf("Continue jogando sem ver o array.\n\n");
                } else {
                    int viewInput;
                    printf("Para visualizar o array após a alteração, digite -2. No entanto, este recurso só pode ser usado no máximo 3 vezes. ");
                    scanf("%d", &viewInput);
                    printf("\n");

                    if (viewInput == -2) {
                        printf("Estado atual do array: ");
                        printArray(arr, ARRAY_SIZE);
                        viewCount++;
                        printf("\n");
                    }
                }
            } else {
                printf("Índices inválidos! Tente novamente.\n");
            }
        }
    }

    if (quit) {
        printf("Você desistiu do jogo.\n");
    } else if (isSorted(arr, ARRAY_SIZE)) {
        printf("Parabéns! Você classificou o array corretamente.\n");
        printf("Array ordenado: ");
        printArray(arr, ARRAY_SIZE);
    }

    return 0;
}
