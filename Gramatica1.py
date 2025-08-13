def gramatica1(cadena):
    
    #verificación que sea o y 1

    if not all(c in "01" for c in cadena):
        return False 
    
    #verifica capicúa 

    return cadena == cadena[::-1]

with open("G1.txt", "r") as archivo:
    for linea in archivo:
        cadena = linea.strip() 
        if gramatica1(cadena):
            print(f"{cadena}: acepta")
        else:
            print(f"{cadena}: No acepta")