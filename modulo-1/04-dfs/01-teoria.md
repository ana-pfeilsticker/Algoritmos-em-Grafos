# Travessia em profundidade (DFS)

> **Lista da disciplina:** [Lista 2 — Travessias](../../materiais/listas/02-travessias.pdf) (revisão questões 1–4, exercícios 6a–b)

## Definição de travessia

Uma **travessia** (ou varredura) de um grafo é um processo sistemático de visitar todos os vértices alcançáveis, explorando as arestas a partir de um vértice inicial.

---

## DFS — Depth-First Search

**Ideia:** ir o mais **profundo** possível antes de retroceder (backtrack).

**Estrutura auxiliar:**
- Vetor `visitado[]` — marca vértices já visitados
- **Recursão** (pilha implícita) ou **pilha explícita** (versão iterativa)

### Pseudocódigo (recursivo)

```
DFS(u):
    visitado[u] = true
    processar(u)           // ex: imprimir, colorir, etc.
    para cada vizinho v de u:
        se não visitado[v]:
            DFS(v)
```

### Ordem de visita

Depende da ordem dos vizinhos. Em:

```
    0 --- 1
    |     |
    2 --- 3
```

DFS a partir de 0 (vizinhos em ordem crescente): **0 → 1 → 3 → 2** (ou variações).

---

## Complexidade

| Representação | Tempo | Espaço |
|---------------|-------|--------|
| Lista de adj. | O(n + m) | O(n) visitado + O(n) pilha recursiva |
| Matriz | O(n²) | O(n) |

---

## Aplicações

- Detectar ciclos
- Verificar conectividade
- Contar componentes (com loop externo)
- Labirintos e grids (grafo implícito)
- Ordenação topológica (em digrafos — módulo futuro)

---

## DFS iterativo

Substitui a pilha de recursão por `stack<int>`:

```
push(origem)
enquanto pilha não vazia:
    u = pop()
    se não visitado[u]:
        visitado[u] = true
        processar(u)
        para cada vizinho v de u:
            push(v)
```

**Atenção:** a ordem de visita pode diferir da versão recursiva.

---

## Para fixar

1. Execute DFS à mão em um grafo de 6 vértices; compare com [VisuAlgo](https://visualgo.net/en/dfsbfs).
2. Por que `visitado` é necessário? O que acontece em grafos com ciclo sem ele?
3. Complete os arquivos em `codigo/`.
