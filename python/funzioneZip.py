#costrutto molto python style

saluti = ["buongiorno", "ciao", "ehi"]
nomi = ["prof", "Luca", "tu"]

for saluto, nome in zip(saluti, nomi):
    print(f"{saluto} {nome}")