compras = []  # Lista para almacenar las compras

while True:
    nombre_producto = input("Ingresa el nombre del producto (o 'fin' para terminar): ")
    if nombre_producto.lower() == 'fin':
        break
    try:
        monto = float(input(f"Ingrese el monto de la compra para '{nombre_producto}': "))
        compras.append((nombre_producto, monto))
    except ValueError:
        print("Ingresa un monto válido.")

total_gastos = sum([monto for _, monto in compras])

print("\nListado de Compras:")
for nombre, monto in compras:
    print(f"{nombre}: ${monto:.2f}")

print(f"\nTotal de Gastos: ${total_gastos:.2f}")