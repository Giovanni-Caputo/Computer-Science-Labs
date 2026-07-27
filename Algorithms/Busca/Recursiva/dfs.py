def dfs(grafo, inicio):
    visitados = set()
    pilha = [inicio]
    while pilha:
        atual = pilha.pop()
        if atual not in visitados:
            visitados.add(atual)
            pilha.extend(grafo[atual])
    return visitados

print(dfs({1: [2, 3], 2: [4], 3: [], 4: []}, 1))
