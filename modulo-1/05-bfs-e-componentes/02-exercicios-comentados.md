# Exercícios comentados — BFS e componentes

## Exercício 1

**Enunciado:** BFS a partir de 0 no grafo:

```
0: 1, 2
1: 0, 3
2: 0
3: 1
```

**Resolução:**

| Passo | Fila | Visitado | Ordem |
|-------|------|----------|-------|
| início | [0] | {0} | — |
| processa 0 | [1,2] | {0,1,2} | 0 |
| processa 1 | [2,3] | {0,1,2,3} | 1 |
| processa 2 | [3] | — | 2 |
| processa 3 | [] | — | 3 |

**Ordem:** 0, 1, 2, 3  
**Distâncias:** dist[0]=0, dist[1]=1, dist[2]=1, dist[3]=2

---

## Exercício 2

**Enunciado:** Quantos componentes conectados?

```
Componente 1: 0-1-2    Componente 2: 3-4    Componente 3: 5 (isolado)
```

**Resolução:**

Loop externo encontra 3 vértices não visitados → **3 componentes**.

---

## Exercício 3

**Enunciado:** Labirinto — menor número de passos de (0,0) até saída?

**Resolução:**

BFS em grid atribui `dist[i][j]` = passos mínimos. Primeira vez que a saída é desenfileirada, `dist` é mínimo.

```cpp
// ao enfileirar vizinho:
dist[ni][nj] = dist[i][j] + 1;
```

DFS **não** garante caminho mínimo em número de passos.
