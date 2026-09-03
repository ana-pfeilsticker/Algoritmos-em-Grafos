# Prática integrada — Problemas LeetCode

Resolva **antes** de abrir `solucoes/`. Tempo sugerido: 30–45 min por problema.

| # | Problema | Tema | Dificuldade | Link |
|---|----------|------|-------------|------|
| 1 | Number of Islands | DFS/BFS em grid | Médio | [LC 200](https://leetcode.com/problems/number-of-islands/) |
| 2 | Flood Fill | DFS em grid | Fácil | [LC 733](https://leetcode.com/problems/flood-fill/) |
| 3 | Rotting Oranges | BFS em grid | Médio | [LC 994](https://leetcode.com/problems/rotting-oranges/) |
| 4 | Max Area of Island | DFS + contagem | Médio | [LC 695](https://leetcode.com/problems/max-area-of-island/) |
| 5 | Find if Path Exists | DFS/BFS em grafo | Fácil | [LC 1971](https://leetcode.com/problems/find-if-path-exists-in-graph/) |

---

## Dicas por problema

### 1. Number of Islands
- Grid implícito; cada `'1'` não visitado inicia nova DFS/BFS.
- Resposta = número de chamadas no loop externo.

### 2. Flood Fill
- DFS a partir de `(sr, sc)` com nova cor.
- Cuidado com limites do grid.

### 3. Rotting Oranges
- BFS multi-fonte: enfileire todos os `2` no início.
- Nível da BFS = minuto.

### 4. Max Area of Island
- DFS retornando tamanho da componente.

### 5. Find if Path Exists
- Grafo já dado como lista de adjacências; DFS/BFS de `source` até achar `destination`.

---

## Beecrowd (alternativa em PT-BR)

| ID | Nome | Tema |
|----|------|------|
| 1195 | Câmbio Esquema | Representação + BFS/DFS |
| 1979 | K-th Ladder | BFS |
| 1104 | Set | DFS |
| 1847 | Fila | BFS |

---

## Simulado sugerido (90 min)

1. Number of Islands (30 min)
2. Rotting Oranges (45 min)
3. Revisar complexidade e justificar abordagem (15 min)
