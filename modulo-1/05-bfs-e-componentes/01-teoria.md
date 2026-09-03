# Travessia em largura (BFS) e componentes conectados

> **Listas da disciplina:**
> - [Lista 2 — Travessias](../../materiais/listas/02-travessias.pdf) (revisão q. 5, exercícios 6c–d e 7)
> - [Lista 3 — Componentes conectados](../../materiais/listas/03-componentes-conectados.pdf) (revisão + exercícios)

## BFS — Breadth-First Search

**Ideia:** visitar vértices em **camadas** — primeiro os vizinhos diretos, depois vizinhos dos vizinhos.

**Estrutura auxiliar:** **fila** (FIFO — First In, First Out)

### Pseudocódigo

```
BFS(origem):
    visitado[origem] = true
    fila.push(origem)
    enquanto fila não vazia:
        u = fila.front(); fila.pop()
        processar(u)
        para cada vizinho v de u:
            se não visitado[v]:
                visitado[v] = true
                fila.push(v)
```

### Ordem de visita

No grafo quadrado 0-1-3-2, BFS a partir de 0: **0, 1, 2, 3** (camada 0, depois camada 1).

---

## BFS vs. DFS

| Aspecto | BFS | DFS |
|---------|-----|-----|
| Estrutura | Fila | Pilha / recursão |
| Caminho mínimo (sem peso) | Sim | Não garante |
| Memória | Pode ser maior (largura) | Geralmente menor |
| Uso típico | Menor número de arestas | Exploração profunda, ciclos |

---

## Componentes conectados

**Definição:** Em grafo **não dirigido**, um componente conectado é um subgrafo **maximal** em que existe caminho entre qualquer par de vértices.

**Algoritmo de contagem:**

```
comp = 0
para cada vértice v de 0 a n-1:
    se não visitado[v]:
        comp++
        BFS(v) ou DFS(v)  // marca todo o componente
```

O número de chamadas BFS/DFS no loop externo = **número de componentes**.

---

## Complexidade

- BFS: O(n + m) com lista de adjacências
- Detecção de componentes: O(n + m) no total

---

## Aplicações

- Menor caminho em grafos não ponderados
- Nível / distância em árvores
- Ilhas em grid (mesmo problema do DFS, BFS dá distância)
- Redes sociais: alcance em k saltos

---

## Para fixar

1. Execute BFS à mão e anote a **distância** de cada vértice à origem.
2. Em grafo desconexo, quantas vezes o loop de componentes executa BFS?
3. Complete `bfs.cpp` e `componentes.cpp`.
