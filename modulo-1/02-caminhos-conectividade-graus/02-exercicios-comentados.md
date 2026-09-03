# Exercícios comentados — Caminhos, conectividade e graus

## Exercício 1

**Enunciado:** No grafo não dirigido abaixo, existe caminho de A até F? Existe ciclo?

```
A --- B --- C
|           |
D --- E --- F
```

**Resolução:**

- Caminho A → F: **A-B-C-F** ou **A-D-E-F**. Sim, existe.
- Ciclo: **A-B-C-F-E-D-A** (hexágono). Sim, o grafo tem ciclos.

---

## Exercício 2

**Enunciado:** Calcule o grau de cada vértice e verifique o lema do aperto de mão.

```
    A --- B
    |\   /|
    | \ / |
    |  X  |   (X é vértice central, não cruzamento de arestas)
    | / \ |
    |/   \|
    C --- D
```

Grafo: A-B, A-C, A-X, B-D, B-X, C-D, C-X, D-X → desenhe conforme sua interpretação.

**Resolução (grafo completo K₄ com vértices A,B,C,D):**

| Vértice | Grau |
|---------|------|
| A | 3 |
| B | 3 |
| C | 3 |
| D | 3 |

Σ deg = 12 = 2m → m = 6. K₄ tem 6 arestas. ✓

---

## Exercício 3

**Enunciado:** Grafo dirigido com vértices {1,2,3,4}: arcos 1→2, 2→3, 3→1, 2→4. Calcule d⁺ e d⁻ de cada vértice. É fortemente conexo?

**Resolução:**

| v | d⁺ | d⁻ |
|---|----|----|
| 1 | 1 | 1 |
| 2 | 2 | 1 |
| 3 | 1 | 1 |
| 4 | 0 | 1 |

- 4 é **sumidouro** (d⁺=0).
- Não há caminho de 4 para nenhum outro vértice → **não é fortemente conexo**.
