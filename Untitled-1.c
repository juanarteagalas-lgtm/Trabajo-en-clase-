#include <stdio.h>

int main() {
    int arreglo[] = {2, 4, 6, 8, 10};  //declaracion de arreglo
    
    //implementacioon de punteros
    int *ptr;
    ptr = &arreglo[0];

    for (int i = 0; i < 5; i++) {   //imprimir los elementos del arreglo 
        printf("elemento %d: %d \n", i, arreglo[i]); 
        //  ptr = &arreglo[i];
        printf("%d \n", *(ptr + i));
    }

    return 0;
}