import random
from collections import deque

# Crear una cola usando deque
cola_tareas = deque()

# Función para generar tareas aleatorias
def generar_tareas_aleatorias(n):
    tareas = ["Enviar correo", "Revisar informe", "Llamar a cliente", "Preparar presentación", "Actualizar agenda"]
    tareas_aleatorias = random.sample(tareas, n)
    return tareas_aleatorias

# Generar 3 tareas aleatorias y agregarlas a la cola
tareas_aleatorias = generar_tareas_aleatorias(3)
cola_tareas.extend(tareas_aleatorias)

while True:
    print("\nMenú:")
    print("1. Ver tareas en la cola")
    print("2. Procesar tareas en orden")
    print("3. Salir")

    opcion = input("Selecciona una opción: ")

    if opcion == '1':
        if cola_tareas:
            print("Tareas en la cola:")
            for i, tarea in enumerate(cola_tareas, start=1):
                print(f"{i}. {tarea}")
        else:
            print("La cola de tareas está vacía.")
    elif opcion == '2':
        if cola_tareas:
            print("Procesando tareas en orden:")
            while cola_tareas:
                tarea_actual = cola_tareas.popleft()
                print("Procesando:", tarea_actual)
        else:
            print("La cola de tareas está vacía.")
    elif opcion == '3':
        print("Saliendo del programa...")
        break
    else:
        print("Opción inválida. Por favor, selecciona una opción válida (1, 2 o 3).")