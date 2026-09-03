# Caminhos, conectividade e graus

> **Lista da disciplina:** [Lista 1 — Fundamentos](../../materiais/listas/01-fundamentos.pdf) (revisão questões 11–12, exercícios 13–16)

## Caminhos e trilhas

Em um grafo **não dirigido**:

| Conceito | Definição |
|----------|-----------|
| **Caminho** | Sequência de vértices v₀, v₁, …, vₖ onde cada par consecutivo é aresta. Comprimento = k (número de arestas). |
| **Trilha** | Caminho em que **arestas não se repetem**. |
| **Caminho simples** | Caminho em que **vértices não se repetem**. |
| **Ciclo** | Caminho fechado com v₀ = vₖ e k ≥ 3, sem repetir vértices (exceto início/fim). |

Em grafos **dirigidos**, substitua "aresta" por **arco** respeitando a direção.

---

## Conectividade

### Grafo não dirigido

- **Conexo**: existe caminho entre **qualquer** par de vértices.
- **Desconexo**: existe pelo menos um par sem caminho entre si.

### Grafo dirigido

- **Fortemente conexo**: para todo par (u, v), existe caminho de u a v **e** de v a u.
- **Fracamente conexo**: se torna conexo ao ignorar direções das arestas.

---

## Grau de um vértice

### Grafo não dirigido

**Grau** de v = número de arestas incidentes a v (loop conta 2 vezes em algumas definições).

**Lema do aperto de mão:** Σ deg(v) = 2m

### Grafo dirigido

| Conceito | Definição |
|----------|-----------|
| **Grau de entrada** d⁻(v) | Número de arcos que **chegam** em v |
| **Grau de saída** d⁺(v) | Número de arcos que **saem** de v |

**Propriedade:** Σ d⁺(v) = Σ d⁻(v) = m

---

## Vértices especiais

| Tipo | Condição (dirigido) |
|------|---------------------|
| **Fonte** | d⁻(v) = 0, d⁺(v) > 0 |
| **Sumidouro** | d⁺(v) = 0, d⁻(v) > 0 |
| **Isolado** | d⁺(v) = d⁻(v) = 0 |

---

## Exemplo

```
Dirigido:

    A → B → C
    ↑       ↓
    D ←──── E

d⁺(A)=0, d⁻(A)=1  → A é fonte? Não, D aponta para A... 
d⁺(D)=1, d⁻(D)=1
d⁺(C)=1, d⁻(C)=1
```

Calcule todos os graus à mão neste exemplo.

---

## Para fixar

1. Em grafo não dirigido com 8 vértices e grau médio 3, quantas arestas existem?
2. Prove que todo grafo não dirigido tem número par de vértices de grau ímpar.
3. Um digrafo pode ter todas as fontes e nenhum sumidouro?
