# Exercícios comentados — DFS

## Exercício 1

**Enunciado:** Aplique DFS a partir do vértice 0 (vizinhos em ordem crescente).

```
0: 1, 2
1: 0, 3
2: 0
3: 1
```

**Resolução:**

1. Visita 0 → marca visitado
2. Vizinho 1 → DFS(1) → visita 1
3. Vizinho 3 de 1 → DFS(3) → visita 3 (vizinho 1 já visitado, volta)
4. Volta para 0, vizinho 2 → DFS(2) → visita 2

**Ordem:** 0, 1, 3, 2

---

## Exercício 2

**Enunciado:** O grafo abaixo tem ciclo? Use DFS para responder.

```
0 --- 1
|     |
2 --- 3 --- 4
```

**Resolução:**

DFS(0): 0→1→3→4 (folha), volta 3→2→0 (2 já visitado via 0, mas aresta 2-3 fecha ciclo).

Sim, existe ciclo: **0-1-3-2-0** (ou 1-3-2-0-1).

*Critério:* em grafo não dirigido, se DFS encontra aresta para vértice já visitado que **não é o pai**, há ciclo.

---

## Exercício 3

**Enunciado:** Contar quantas células `.` existem em uma grade (ilha conectada 4-direções).

**Resolução:**

Cada componente de `.` é explorada por uma DFS. Para cada célula não visitada `.`, inicia DFS e incrementa contador, somando células visitadas naquela componente.

```cpp
// esboço
int dfs(int i, int j) {
    if (!valido(i,j) || grid[i][j] != '.' || vis[i][j]) return 0;
    vis[i][j] = true;
    int t = 1;
    for (cada direção) t += dfs(ni, nj);
    return t;
}
```
