def gramatica4(cadena):
    # El lenguaje L(G4) solo acepta "ab" y "abb"
    return cadena in {"ab", "abb"}

# Leer desde el archivo gramatica4.txt
with open("G4.txt", "r") as archivo:
    for linea in archivo:
        cadena = linea.strip()  # quitar saltos de línea y espacios
        if gramatica4(cadena):
            print(f"{cadena}: Acepta")
        else:
            print(f"{cadena}: No acepta")

