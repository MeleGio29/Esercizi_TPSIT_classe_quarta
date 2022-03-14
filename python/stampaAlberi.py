class Albero:
    def __init__(self, Contenuto, Sinistra=None, Destra=None):
        self.Contenuto = Contenuto
        self.Sinistra  = Sinistra
        self.Destra = Destra

    def __str__(self):
        return str(self.Contenuto)

    def Totale(self, Albero): #restituisce la somma di tutti i rami
        if Albero == None: return 0
        return Albero.Contenuto + self.Totale(Albero.Sinistra) + self.Totale(Albero.Destra)

def main():
    Albero = 1

    somma = Albero.Totale(Albero)
    print(somma)

if __name__ == "__main__":
    main()