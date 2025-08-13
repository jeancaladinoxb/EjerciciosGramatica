def gramatica1(cadena):
    
    #verificación que sea o y 1

    if not all(c in "01" for c in cadena):
        return False 
    
    #verifica capicúa 

    return cadena == cadena[::-1]

entrada = input("Ingrese la cadena: ").strip()

if gramatica1(entrada):
    print("acepta")
else:
    print("no a acepta")    