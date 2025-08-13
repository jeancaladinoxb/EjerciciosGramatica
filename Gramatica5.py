def gramatica5(cadena):
    if len(cadena) < 2:
        return False
    
    if cadena[0] != 'a' or cadena[-1] != 'b':
        return False
    
    middle = cadena[1:-1]
    
    if len(middle) % 2 != 0:
        return False
    
    for i in range(0, len(middle), 2):
        if middle[i] != 'a' or middle[i+1] != 'b':
            return False
    
    return True

archivo = open('G5.txt', 'r')
lineas = archivo.readlines()
archivo.close()

for linea in lineas:
    cadena = linea.strip()
    if gramatica5(cadena):
        print(f"{cadena}: Acepta")
    else:
        print(f"{cadena}: No acepta")