def selection_sort(lista):
    n = len(lista)
    for i in range(n):
        menor = i
        for j in range(i + 1, n):
            if lista[j] < lista[menor]:
                menor = j
        lista[i], lista[menor] = lista[menor], lista[i]
    return lista

print(selection_sort([5, 2, 9, 1]))
