# Algoritmos em Grafos — Repositório de Estudo

Material organizado por **temas** para acompanhar a disciplina de Algoritmos em Grafos (UnB).  
Cada pasta de tema segue o mesmo padrão: teoria → exercícios comentados → exercícios em branco → código.

## Estrutura

```
Algoritmos-em-Grafos/
├── README.md                 # Este arquivo — visão geral e plano
├── RECURSOS.md               # Links, livros, vídeos e referências
├── materiais/
│   └── listas/               # Listas oficiais da disciplina (PDF)
│       ├── 01-fundamentos.pdf
│       ├── 02-travessias.pdf
│       └── 03-componentes-conectados.pdf
└── modulo-1/
    ├── 01-classificacao-e-conceitos/
    ├── 02-caminhos-conectividade-graus/
    ├── 03-representacao-de-grafos/
    ├── 04-dfs/
    ├── 05-bfs-e-componentes/
    └── 06-pratica/
```

### Padrão de cada tema

| Arquivo | Propósito |
|---------|-----------|
| `01-teoria.md` | Conceitos, definições e exemplos |
| `02-exercicios-comentados.md` | Problemas resolvidos passo a passo |
| `03-exercicios-branco.md` | Problemas para resolver sozinho |
| `codigo/` | Implementações base (incompletas) para completar |

---

## Plano de Estudo — Módulo 1

Estimativa: **4 a 5 semanas** (1 tema por semana, com prática no final).  
Ajuste o ritmo conforme a carga da disciplina.

### Semana 1 — Classificação e conceitos básicos

**Tema:** `modulo-1/01-classificacao-e-conceitos/`  
**Lista da disciplina:** [Lista 1 — Fundamentos](materiais/listas/01-fundamentos.pdf) (revisão questões 1–10)

| Dia | Atividade | Tempo |
|-----|-----------|-------|
| 1 | Ler revisão da Lista 1 (q. 1–10) + `01-teoria.md` | 1–2 h |
| 2 | Classificar grafos dos exercícios (simples, multigrafo, pseudografo…) | 1 h |
| 3 | Resolver `02-exercicios-comentados.md` | 1–2 h |
| 4 | Tentar `03-exercicios-branco.md` sem olhar respostas | 1–2 h |
| 5 | Revisão: desenhar 3 grafos de cada tipo (a)–(d) | 1 h |

**Objetivos de aprendizado:**
- Classificar grafos quanto a loops, multiarestas, densidade, orientação e pesos
- Usar vocabulário correto (simples, dirigido, ponderado, completo, esparso…)

---

### Semana 2 — Caminhos, conectividade e graus

**Tema:** `modulo-1/02-caminhos-conectividade-graus/`  
**Lista da disciplina:** [Lista 1 — Fundamentos](materiais/listas/01-fundamentos.pdf) (revisão q. 11–12 + exercícios q. 13–16)

| Dia | Atividade | Tempo |
|-----|-----------|-------|
| 1 | Revisão Lista 1 (q. 11–12) + teoria: caminhos, ciclos, conectividade | 1–2 h |
| 2 | Calcular graus de entrada/saída; resolver q. 15 da Lista 1 | 1 h |
| 3 | Exercícios comentados + q. 13–14 da Lista 1 | 1–2 h |
| 4 | Exercícios em branco + q. 16 da Lista 1 (desenhar grafos) | 1–2 h |
| 5 | Revisão: provar ou refutar afirmações sobre conectividade | 1 h |

**Objetivos de aprendizado:**
- Diferenciar caminho, trilha, ciclo e circuito
- Calcular graus em grafos orientados e não orientados
- Identificar grafos conexos vs. desconexos

---

### Semana 3 — Representação de grafos

**Tema:** `modulo-1/03-representacao-de-grafos/`  
**Lista da disciplina:** revisar q. 16(a–e) da [Lista 1](materiais/listas/01-fundamentos.pdf) modelando com matriz/lista

| Dia | Atividade | Tempo |
|-----|-----------|-------|
| 1 | Teoria: matriz vs. lista vs. lista de arestas vs. implícito | 1–2 h |
| 2 | Revisar `vector` em C++ (`codigo/vector-exemplo.cpp`) | 1 h |
| 3 | Completar `grafo-matriz.cpp` e `grafo-lista.cpp` | 2–3 h |
| 4 | Exercícios comentados + em branco | 1–2 h |
| 5 | Comparar complexidade de espaço/tempo das representações | 1 h |

**Objetivos de aprendizado:**
- Escolher a representação adequada ao problema
- Implementar matriz e lista de adjacências em C++
- Reconhecer grafos implícitos (grade, tabuleiro, dependências)

---

### Semana 4 — DFS (travessia em profundidade)

**Tema:** `modulo-1/04-dfs/`  
**Lista da disciplina:** [Lista 2 — Travessias](materiais/listas/02-travessias.pdf) (revisão q. 1–4 + exercícios q. 6a–b)

| Dia | Atividade | Tempo |
|-----|-----------|-------|
| 1 | Revisão Lista 2 (q. 1–4) + teoria: travessia e DFS | 1–2 h |
| 2 | Resolver q. 6(a–b) da Lista 2 à mão (menor rótulo) | 1 h |
| 3 | Completar `dfs-recursivo.cpp` | 1–2 h |
| 4 | Completar `dfs-iterativo.cpp` (pilha) | 1–2 h |
| 5 | Exercícios do repositório + revisão recursivo vs. iterativo | 1–2 h |

**Objetivos de aprendizado:**
- Executar DFS manualmente e prever a ordem de visita
- Implementar DFS recursivo e iterativo
- Usar DFS para explorar grafos implícitos

---

### Semana 5 — BFS e componentes conectados

**Tema:** `modulo-1/05-bfs-e-componentes/`  
**Listas da disciplina:**
- [Lista 2 — Travessias](materiais/listas/02-travessias.pdf) (revisão q. 5 + exercícios q. 6c–d e q. 7)
- [Lista 3 — Componentes conectados](materiais/listas/03-componentes-conectados.pdf) (revisão + exercícios)

| Dia | Atividade | Tempo |
|-----|-----------|-------|
| 1 | Revisão Lista 2 (q. 5) + teoria BFS + q. 6(c–d) | 1–2 h |
| 2 | Completar `bfs.cpp` + q. 7 da Lista 2 (distâncias) | 1–2 h |
| 3 | Revisão Lista 3 (q. 1–5) + teoria de componentes | 1 h |
| 4 | Completar `componentes.cpp` + q. 6–7 da Lista 3 | 1–2 h |
| 5 | Exercícios do repositório + comparar BFS vs. DFS | 1–2 h |

**Objetivos de aprendizado:**
- Implementar BFS com fila
- Contar e listar componentes conectados
- Saber que BFS encontra caminhos de comprimento mínimo (arestas sem peso)

---

### Semana 6 — Prática integrada (opcional, mas recomendado)

**Tema:** `modulo-1/06-pratica/`

| Atividade | Tempo |
|-----------|-------|
| Resolver os 5 problemas do LeetCode listados em `problemas-leetcode.md` | 3–5 h |
| Revisar soluções em `solucoes/` só depois de tentar | — |
| Simulado: 2 problemas em 90 min (condição de prova) | 1,5 h |

---

## Como estudar cada tema

1. **Leia a revisão da lista** correspondente em [`materiais/listas/`](materiais/listas/).
2. **Leia a teoria** (`01-teoria.md`) sem pressa; anote dúvidas.
3. **Resolva os exercícios da lista** da disciplina (sem gabarito).
4. **Faça os comentados** (`02-exercicios-comentados.md`) entendendo cada passo.
5. **Tente os em branco** (`03-exercicios-branco.md`) com timer (20–30 min por problema).
6. **Implemente o código** na pasta `codigo/` antes de buscar soluções prontas.
7. **Revise** no fim da semana: explique o tema em voz alta em 5 minutos.

## Checklist do Módulo 1

- [ ] Classifico qualquer grafo pelos critérios (a)–(d)
- [ ] Calculo graus e identifico caminhos/ciclos
- [ ] Implemento matriz e lista de adjacências
- [ ] Escolho a representação certa para um problema
- [ ] Implemento DFS (recursivo e iterativo)
- [ ] Implemento BFS e conto componentes conectados
- [ ] Resolvo pelo menos 3 problemas de prática sozinho
- [ ] Concluí as 3 listas oficiais da disciplina

## Próximos módulos

Espaço reservado para temas futuros (árvores, caminhos mínimos, fluxo máximo, etc.).  
A estrutura `modulo-2/`, `modulo-3/`… seguirá o mesmo padrão.

---

Consulte [RECURSOS.md](RECURSOS.md) para livros, vídeos, documentação e plataformas de exercícios.
