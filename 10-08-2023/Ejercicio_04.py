# Definir una matriz como una lista de listas
matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

# Acceder a elementos de la matriz
print(matrix[0][0])  # Imprime: 1
print(matrix[1][2])  # Imprime: 6

# Modificar un elemento en la matriz
matrix[1][1] = 10
print(matrix)  # Imprime: [[1, 2, 3], [4, 10, 6], [7, 8, 9]]

# Iterar a través de una matriz
for fila in matrix:
    for elemento in fila:
        print(elemento, end=' ')
    print()