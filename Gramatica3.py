def Gramatica3(cadena):
    # Verificar que solo tenga 'a' y 'b'
    if not all(c in "ab" for c in cadena):
        return False
    
    num_a = cadena.count('a')
    num_b = cadena.count('b')
    
    # Todos los 'a' antes que 'b'
    if cadena != 'a' * num_a + 'b' * num_b:
        return False
    
    # Condición: num_b = num_a + 1 y al menos 1 'a'
    return num_a > 0 and num_b == num_a + 1

# Programa principal
entrada = input("Ingresa la cadena: ").strip()

if Gramatica3(entrada):
    print("acepta")
else:
    print("NO acepta")
