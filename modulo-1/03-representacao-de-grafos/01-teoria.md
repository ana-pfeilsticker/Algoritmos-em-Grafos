# Representação de grafos

> **Lista da disciplina:** [Lista 1 — Fundamentos](../../materiais/listas/01-fundamentos.pdf) (exercício 16 — modelar grafos desenhados)

## Por que representar?

Algoritmos precisam de uma estrutura de dados para navegar no grafo. A escolha afeta **memória** e **tempo** das operações.

| Operação | Matriz | Lista de adj. | Lista de arestas |
|----------|--------|---------------|------------------|
| Existe aresta (u,v)? | O(1) | O(grau(u)) | O(m) |
| Listar vizinhos de u | O(n) | O(grau(u)) | O(m) |
| Adicionar aresta | O(1) | O(1) amortizado | O(1) |
| Espaço | O(n²) | O(n + m) | O(m) |

---

## (a) Matriz de adjacências

Matriz `adj[n][n]` onde `adj[i][j] = 1` (ou peso) se existe aresta i–j.

**Vantagens:** consulta O(1), bom para grafos **densos**.  
**Desvantagens:** O(n²) memória mesmo se m for pequeno.

```cpp
// Grafo não dirigido, não ponderado
adj[u][v] = adj[v][u] = 1;
```

---

## (b) Lista de adjacências

Array de listas: `adj[u]` contém todos os vizinhos de u.

**Vantagens:** O(n + m) memória, ideal para grafos **esparsos**.  
**Desvantagens:** consulta de aresta mais lenta.

```cpp
vector<vector<int>> adj(n);
adj[u].push_back(v);
adj[v].push_back(u);  // se não dirigido
```

---

## Lista de arestas

Vetor de pares `(u, v)` ou triplas `(u, v, peso)`.

Útil em algoritmos como **Kruskal** (ordenar arestas). Ruim para travessias.

```cpp
vector<pair<int,int>> arestas;
arestas.push_back({u, v});
```

---

## Grafos implícitos

O grafo **não é armazenado explicitamente** — os vizinhos são gerados sob demanda.

| Exemplo | Vértices | Vizinhos gerados por |
|---------|----------|----------------------|
| Grade 2D | Células (i, j) | 4 ou 8 direções |
| Tabuleiro de xadrez | Casas | Movimentos válidos da peça |
| Estado do problema | Configurações | Transições permitidas |

DFS/BFS funcionam igual — só muda como você obtém `adj[u]`.

---

## Classe `vector` em C++

```cpp
#include <vector>
using namespace std;

vector<int> v;           // vazio
vector<int> v(10);       // 10 zeros
vector<int> v(10, -1);   // 10 elementos com valor -1

v.push_back(x);          // adiciona no fim — O(1) amortizado
v.size();                // quantidade de elementos
v[i];                    // acesso O(1)

// percorrer
for (int x : v) { ... }
for (int i = 0; i < (int)v.size(); i++) { ... }
```

`vector<vector<int>>` é o padrão para lista de adjacências.

---

## Quando usar cada representação?

| Situação | Representação |
|----------|---------------|
| n ≤ 500, m denso | Matriz |
| n grande, m esparso | Lista de adjacências |
| Só precisa ordenar arestas | Lista de arestas |
| Labirinto / grade | Grafo implícito |

---

## Para fixar

1. Grafo com n=1000, m=2000: matriz ou lista?
2. Implemente leitura de grafo não dirigido no formato: `n m` depois `m` linhas `u v`.
3. Converta mentalmente uma matriz 4×4 em listas de adjacências.
