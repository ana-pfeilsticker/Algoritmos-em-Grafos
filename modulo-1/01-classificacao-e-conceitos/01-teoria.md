# Classificação e conceitos básicos de grafos

> **Lista da disciplina:** [Lista 1 — Fundamentos](../../materiais/listas/01-fundamentos.pdf) (revisão questões 1–10)

## Definição

Um **grafo** G = (V, E) é formado por:
- **V**: conjunto finito de **vértices** (ou nós)
- **E**: conjunto de **arestas** (ou arcos), cada uma ligando um par de vértices

---

## (a) Presença de loops e multiarestas

| Tipo | Loops? | Multiarestas? | Nome comum |
|------|--------|----------------|------------|
| **Simples** | Não | Não | Grafo simples |
| **Multigrafo** | Não* | Sim | Multigrafo |
| **Pseudografo** | Sim | Sim | Pseudografo |

\* Em algumas definições, multigrafo pode ter loops.

- **Loop (ou laço)**: aresta que liga um vértice a si mesmo.
- **Multiaresta**: duas ou mais arestas entre o mesmo par de vértices.

**Exemplo:** uma rede de amizades no Instagram tende a ser **simples** (sem aresta duplicada). Uma rede de voos entre cidades pode ser **multigrafo** (vários voos no mesmo trecho).

---

## (b) Proporção arestas / vértices

Para n vértices, o máximo de arestas em grafo **simples não dirigido** é:

```
m_max = n(n - 1) / 2
```

| Classificação | Condição (não dirigido, simples) |
|---------------|-----------------------------------|
| **Completo** | m = n(n-1)/2 — todo par de vértices é adjacente |
| **Denso** | m próximo do máximo |
| **Esparso** | m << n² — poucas arestas em relação ao máximo |

Em grafos **dirigidos** simples: m_max = n(n - 1).

---

## (c) Orientação das arestas

| Tipo | Arestas | Notação |
|------|---------|---------|
| **Não dirigido** | Sem direção; (u,v) = (v,u) | Grafo não orientado |
| **Dirigido (orientado)** | Com direção; arco u → v | Digrafo, grafo orientado |
| **Misto** | Algumas dirigidas, outras não | Grafo misto |

---

## (d) Pesos nas arestas

| Tipo | Descrição |
|------|-----------|
| **Não ponderado** | Todas as arestas têm o mesmo "custo" implícito (1) |
| **Ponderado** | Cada aresta tem um peso (distância, tempo, capacidade…) |

---

## Outros conceitos úteis

- **Grafo vazio**: V ≠ ∅ e E = ∅
- **Grafo trivial**: |V| = 1
- **Subgrafo**: H = (V', E') com V' ⊆ V e E' ⊆ E
- **Vizinhança** de v: conjunto de vértices adjacentes a v

---

## Resumo visual

```
Simples, não dirigido, não ponderado:     Dirigido, ponderado:

    A --- B                                   A --3--> B
    |     |                                   |         |
    C --- D                                   2         1
                                              v         v
                                              C <--4--- D
```

---

## Para fixar

1. Desenhe um exemplo de cada combinação: (simples/dirigido) × (ponderado/não ponderado).
2. Para n = 5, quantas arestas tem o grafo completo não dirigido?
3. Classifique o grafo da malha viária de uma cidade (dirigido? ponderado?).
