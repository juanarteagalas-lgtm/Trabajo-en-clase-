#include <stdio.h>

int main() {
    int arreglo[] = {2, 4, 6, 8, 10};
    int tamaño = sizeof(arreglo) / sizeof(arreglo[0]);

    for (int i = 0; i < tamaño; i++) {
        printf("%d ", arreglo[i]);
    }

    return 0;
}