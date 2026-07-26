#include <stdio.h>
void completarMatrices(int matriz[2][3], int numMatrices);
void sumaMatriz(int matrizUno[2][3], int matrizDos[2][3], int suma[2][3]);
void restaMatriz(int matrizUno[2][3], int matrizDos[2][3], int resta[2][3]);
void multiplicacionMatriz(int matrizUno[2][3], int matrizDos[2][3], int multiplicacion[2][3]);
void mostrarResultado (int matriz[2][3]);

int main (){
    int matrizUno[2][3], matrizDos[2][3], suma[2][3], resta[2][3], multiplicacion[2][3], numMatrices;

    completarMatrices(matrizUno, 1);
    completarMatrices(matrizDos, 2);

    sumaMatriz(matrizUno, matrizDos, suma);
    restaMatriz(matrizUno, matrizDos, resta);
    multiplicacionMatriz(matrizUno, matrizDos, multiplicacion);

    
    return 0;
}

void completarMatrices(int matriz[2][3], int numMatrices){
    int i, j;
    printf ("---------------------------------------------------\n");
    printf ("Matriz %i\n", numMatrices);
    printf ("---------------------------------------------------\n");
    
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            printf ("Ingresa la posicion %i, %i: ", i, j);
            scanf ("%i", &matriz[i][j]);
        }
    }
    

    for (i = 0; i < 2; i++){
        printf("[");
        for (j = 0; j < 3; j++){
            printf (" %i ", matriz[i][j]);
        }
        printf ("]\n");
    }
}

void sumaMatriz(int matrizUno[2][3], int matrizDos[2][3], int suma[2][3]){
    int i, j;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            suma[i][j] = matrizUno[i][j] + matrizDos[i][j];
        }
    }

    printf ("---------------------------------------------------\n");
    printf ("Suma de Matrices\n");
    printf ("---------------------------------------------------\n");

    mostrarResultado(suma);
}

void restaMatriz(int matrizUno[2][3], int matrizDos[2][3], int resta[2][3]){
    int i, j;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            resta[i][j] = matrizUno[i][j] - matrizDos[i][j];
        }
    }

    printf ("---------------------------------------------------\n");
    printf ("Resta de Matrices\n");
    printf ("---------------------------------------------------\n");

    mostrarResultado(resta); 
}

void multiplicacionMatriz(int matrizUno[2][3], int matrizDos[2][3], int multiplicacion[2][3]){
    int i, j;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            multiplicacion[i][j] = matrizUno[i][j] * matrizDos[i][j];
        }
    }

    printf ("---------------------------------------------------\n");
    printf ("Multiplicación de Matrices\n");
    printf ("---------------------------------------------------\n");

    mostrarResultado(multiplicacion);
}

void mostrarResultado (int matriz[2][3]){

    int i, j;

    for (i = 0; i < 2; i++){
        printf ("[");
        for (j = 0; j < 3; j++){
            printf (" %i ", matriz[i][j]);
        }
        printf ("]\n");
    }
    
}