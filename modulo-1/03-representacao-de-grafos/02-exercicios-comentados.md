# Exercícios comentados — Representação de grafos

## Exercício 1

**Enunciado:** Represente por matriz e por lista o grafo:

```
    0 --- 1
    |     |
    2 --- 3
```

**Resolução — Matriz (4 vértices, índices 0..3):**

```
    0  1  2  3
0 [ 0  1  1  0 ]
1 [ 1  0  0  1 ]
2 [ 1  0  0  1 ]
3 [ 0  1  1  0 ]
```

**Listas:**
- 0: [1, 2]
- 1: [0, 3]
- 2: [0, 3]
- 3: [1, 2]

---

## Exercício 2

**Enunciado:** Qual representação usar para n = 10⁵ vértices e m = 2 × 10⁵ arestas?

**Resolução:**

- Matriz: 10¹⁰ células → inviável em memória.
- **Lista de adjacências:** O(n + m) ≈ 3 × 10⁵ → adequada.

---

## Exercício 3

**Enunciado:** Em um labirinto n×m de células `.` (livre) e `#` (parede), como modelar como grafo implícito?

**Resolução:**

- Vértice = cada célula `(i, j)` livre.
- Vizinhos = células adjacentes (cima, baixo, esquerda, direita) que também são `.`.
- Não armazenamos `adj` — na DFS/BFS, geramos vizinhos com loops:

```cpp
int di[] = {-1, 1, 0, 0};
int dj[] = {0, 0, -1, 1};
for (int k = 0; k < 4; k++) {
    int ni = i + di[k], nj = j + dj[k];
    if (valido(ni, nj) && grid[ni][nj] == '.') { ... }
}
```
