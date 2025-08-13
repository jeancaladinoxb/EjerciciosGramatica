def gramatica2(cadena):

    if not all (c in 'ab' for c in cadena):
       return False 
    
    num_a = cadena.count('a')
    num_b = cadena.count('b')
    if cadena != 'a' *num_a + 'b' * num_b:
        return False
    
    
  # Contar a y b
    num_a = cadena.count('a')
    num_b = cadena.count('b')
    
    # Verificar estructura: todos los 'a' antes que 'b'
    if cadena != 'a' * num_a + 'b' * num_b:
        return False
    
    # Verificar que num_b = num_a + 1
    return num_b == num_a + 1

with open("G2.txt", "r") as archivo:
    for linea in archivo:
        cadena = linea.strip() 
        if gramatica2(cadena):
            print(f"{cadena}: acepta")
        else:
            print(f"{cadena}: No acepta")