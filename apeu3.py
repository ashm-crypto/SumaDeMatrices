def completar_matrices(num_matrices):
    print("---------------------------------------------------")
    print(f"Matriz {num_matrices}")
    print("---------------------------------------------------")
    
    matriz = []
    for i in range(2):
        fila = []
        for j in range(3):
            val = int(input(f"Ingresa la posicion {i}, {j}: "))
            fila.append(val)
        matriz.append(fila)
        
    for i in range(2):
        print("[", end="")
        for j in range(3):
            print(f" {matriz[i][j]} ", end="")
        print("]")
        
    return matriz

def suma_matriz(matriz_uno, matriz_dos):
    suma = [[matriz_uno[i][j] + matriz_dos[i][j] for j in range(3)] for i in range(2)]
    print("---------------------------------------------------")
    print("Suma de Matrices")
    print("---------------------------------------------------")
    mostrar_resultado(suma)
    return suma

def resta_matriz(matriz_uno, matriz_dos):
    resta = [[matriz_uno[i][j] - matriz_dos[i][j] for j in range(3)] for i in range(2)]
    print("---------------------------------------------------")
    print("Resta de Matrices")
    print("---------------------------------------------------")
    mostrar_resultado(resta)
    return resta

def multiplicacion_matriz(matriz_uno, matriz_dos):
    multiplicacion = [[matriz_uno[i][j] * matriz_dos[i][j] for j in range(3)] for i in range(2)]
    print("---------------------------------------------------")
    print("Multiplicación de Matrices")
    print("---------------------------------------------------")
    mostrar_resultado(multiplicacion)
    return multiplicacion

def mostrar_resultado(matriz):
    for i in range(2):
        print("[", end="")
        for j in range(3):
            print(f" {matriz[i][j]} ", end="")
        print("]")

def main():
    matriz_uno = completar_matrices(1)
    matriz_dos = completar_matrices(2)

    suma_matriz(matriz_uno, matriz_dos)
    resta_matriz(matriz_uno, matriz_dos)
    multiplicacion_matriz(matriz_uno, matriz_dos)

if __name__ == "__main__":
    main()