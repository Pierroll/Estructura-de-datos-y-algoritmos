# Definir una pila vacía
stack = []

# Agregar elementos a la pila (push)
stack.append("Elemento 1")
stack.append("Elemento 2")
stack.append("Elemento 3")

# Mostrar los elementos de la pila
print("Pila original:", stack)

# Sacar elementos de la pila (pop) en este caso se elimina el elemento 3 por que fue el útimo elemento ingresado
elemento_pop = stack.pop()
print("Elemento sacado de la pila:", elemento_pop)

# Mostrar la pila después de sacar un elemento
print("Pila después del pop:", stack)
