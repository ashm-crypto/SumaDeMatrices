import java.util.Scanner;

public class apeu3 {
    public static void main(String[] args) {
        int[][] matrizUno = new int[2][3];
        int[][] matrizDos = new int[2][3];
        int[][] suma = new int[2][3];
        int[][] resta = new int[2][3];
        int[][] multiplicacion = new int[2][3];

        completarMatrices(matrizUno, 1);
        completarMatrices(matrizDos, 2);

        sumaMatriz(matrizUno, matrizDos, suma);
        restaMatriz(matrizUno, matrizDos, resta);
        multiplicacionMatriz(matrizUno, matrizDos, multiplicacion);
    }

    public static void completarMatrices(int[][] matriz, int numMatrices) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("---------------------------------------------------");
        System.out.println("Matriz " + numMatrices);
        System.out.println("---------------------------------------------------");

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print("Ingresa la posicion " + i + ", " + j + ": ");
                matriz[i][j] = scanner.nextInt();
            }
        }

        for (int i = 0; i < 2; i++) {
            System.out.print("[");
            for (int j = 0; j < 3; j++) {
                System.out.print(" " + matriz[i][j] + " ");
            }
            System.out.println("]");
        }
    }

    public static void sumaMatriz(int[][] matrizUno, int[][] matrizDos, int[][] suma) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                suma[i][j] = matrizUno[i][j] + matrizDos[i][j];
            }
        }

        System.out.println("---------------------------------------------------");
        System.out.println("Suma de Matrices");
        System.out.println("---------------------------------------------------");
        mostrarResultado(suma);
    }

    public static void restaMatriz(int[][] matrizUno, int[][] matrizDos, int[][] resta) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                resta[i][j] = matrizUno[i][j] - matrizDos[i][j];
            }
        }

        System.out.println("---------------------------------------------------");
        System.out.println("Resta de Matrices");
        System.out.println("---------------------------------------------------");
        mostrarResultado(resta);
    }

    public static void multiplicacionMatriz(int[][] matrizUno, int[][] matrizDos, int[][] multiplicacion) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                multiplicacion[i][j] = matrizUno[i][j] * matrizDos[i][j];
            }
        }

        System.out.println("---------------------------------------------------");
        System.out.println("Multiplicación de Matrices");
        System.out.println("---------------------------------------------------");
        mostrarResultado(multiplicacion);
    }

    public static void mostrarResultado(int[][] matriz) {
        for (int i = 0; i < 2; i++) {
            System.out.print("[");
            for (int j = 0; j < 3; j++) {
                System.out.print(" " + matriz[i][j] + " ");
            }
            System.out.println("]");
        }
    }
}