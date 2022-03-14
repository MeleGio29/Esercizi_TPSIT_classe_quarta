#BISOGNA SCRIVERE IN PYTHON STYLE, NON IN C STYLE

lista = ["ciao", "d", "buongiorno"]

#C style
for i in range(len(lista)):
    print(lista[i])

#python style
for elem in lista:
    print(elem)

#C style
contatore = 0
for elem in lista:
    print(contatore, elem)
    contatore = contatore + 1

#python style
for contatore, elem in enumerate[lista]:
    print(contatore, elem)