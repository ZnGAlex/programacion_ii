#include "matriz.h"

void imprimeMatriz(matriz *M) {
    int i, k;

    if (M != 0) {
        for (i = 0; i < M->filas; i++) {
            for (k = 0; k < M->columnas; k++)
                printf("%f ", *((M->datos) + i * M->filas + k));
            printf("\n");
        }
        printf("\n");
    } else
        printf("A matriz non existe\n");
}
