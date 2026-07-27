def conta_vogais(texto: str) -> int:
    vogais = set("aeiou")
    return sum(1 for letra in texto.lower() if letra in vogais)

print(conta_vogais("programacao"))
