# Exercícios comentados — Classificação e conceitos

## Exercício 1

**Enunciado:** Classifique o grafo abaixo quanto a (a) loops/multiarestas, (b) densidade, (c) orientação e (d) pesos.

```
    1 --- 2
    |   / |
    |  /  |
    3 --- 4
         / \
        5---5  (vértice 5 com loop)
```

**Resolução:**

- **(a)** Possui **loop** no vértice 5 → **pseudografo** (ou grafo com laço).
- **(b)** n = 5, m ≈ 6 arestas (contando o loop). Máximo = 10. Não é completo; é **moderadamente denso**.
- **(c)** Arestas sem seta → **não dirigido**.
- **(d)** Sem pesos indicados → **não ponderado**.

---

## Exercício 2

**Enunciado:** Um grafo completo não dirigido tem 45 arestas. Quantos vértices possui?

**Resolução:**

```
m = n(n-1)/2 = 45
n(n-1) = 90
n = 10  (pois 10 × 9 / 2 = 45)
```

**Resposta:** 10 vértices.

---

## Exercício 3

**Enunciado:** Em um torneio de xadrez onde cada jogador enfrenta todos os outros exatamente uma vez (vitória, derrota ou empate), que tipo de grafo modela o torneio?

**Resolução:**

- Cada partida é um **arco** entre dois jogadores (resultado tem direção: quem ganhou).
- Não há loop (jogador não joga contra si).
- Entre dois jogadores há **no máximo uma** partida.

→ **Grafo dirigido simples** (digrafo). Se empates forem arestas bidirecionais ou peso 0, a modelagem pode variar — discuta com o professor qual convenção adotar.
