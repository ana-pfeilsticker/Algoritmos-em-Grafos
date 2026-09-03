# Recursos — Algoritmos em Grafos

Curadoria de materiais para o Módulo 1. Prioridade: **material da disciplina** → livros → vídeos → prática.

---

## Material da disciplina

### Listas oficiais (prioridade máxima)

| Lista | Arquivo | Conteúdo | Quando estudar |
|-------|---------|----------|----------------|
| **Lista 1 — Fundamentos** | [01-fundamentos.pdf](materiais/listas/01-fundamentos.pdf) | Definições, classificação, graus, caminhos, exercícios 13–16 | Semanas 1–3 |
| **Lista 2 — Travessias** | [02-travessias.pdf](materiais/listas/02-travessias.pdf) | DFS, BFS, distâncias em arestas | Semanas 4–5 |
| **Lista 3 — Componentes conectados** | [03-componentes-conectados.pdf](materiais/listas/03-componentes-conectados.pdf) | Conectividade, contagem e construção de componentes | Semana 5 |

Índice completo com mapeamento por questão: [materiais/listas/README.md](materiais/listas/README.md)

### Outros recursos da disciplina

| Recurso | Uso |
|---------|-----|
| Slides e aulas do professor | Complemento às listas — alinhar teoria e nomenclatura |
| Sala de aula / fórum da turma | Dúvidas e padrões de prova |
| Este repositório | Teoria resumida, exercícios extras e código base |

---

## Livros e textos

### Essenciais

| Obra | Por quê | Onde |
|------|---------|------|
| **Cormen et al.** — *Algoritmos: Teoria e Prática* (CLRS), cap. 22 (Representação) e 22.3 (DFS/BFS) | Referência padrão; provas e complexidade | Biblioteca UnB / PDF institucional |
| **Skiena** — *The Algorithm Design Manual*, cap. Graphs | Intuição + catálogo de problemas | [algorithmics.lsi.upc.edu](https://algorithmics.lsi.upc.edu/docs/Distribucio/AlgoritmiaMaterial/Algorithm%20Design%20Manual%20-%20Steven%20S%20Skiena%202nd%20ed.pdf) |
| **Sedgewick & Wayne** — *Algorithms*, Parte 4 (Graphs) | Visual, bom para implementação em C++/Java | [algs4.cs.princeton.edu](https://algs4.cs.princeton.edu/) |

### Complementares

| Obra | Por quê |
|------|---------|
| **Kleinberg & Tardos** — *Algorithm Design*, cap. 3 | Boa para grafos e conectividade com exercícios guiados |
| **Bondy & Murty** — *Graph Theory* | Teoria formal de grafos (mais matemático) |
| **cp-algorithms.com** — Graph section | Artigos curtos, implementações em C++ |

---

## Vídeos

### Em português

| Canal / playlist | Tema | Link |
|------------------|------|------|
| **Me Salva!** — Grafos | Conceitos básicos, representação | Buscar "grafos" no canal |
| **Prof. Gustavo Guimarães** — Estrutura de Dados | Listas, pilhas, filas (pré-requisito de BFS/DFS) | YouTube |
| **Unicamp IC** — Algoritmos em Grafos | Aulas completas em PT-BR | YouTube: "Algoritmos em Grafos UNICAMP" |

### Em inglês (legendas disponíveis)

| Canal / playlist | Tema | Link |
|------------------|------|------|
| **William Fiset** — Graph Theory | DFS, BFS, componentes, muito didático | [YouTube playlist](https://www.youtube.com/playlist?list=PLDV1Zeh2eBs1fm26umzM4hh6TG17Kn17B) |
| **MIT 6.006** — Graphs | BFS, DFS, representações | [MIT OpenCourseWare](https://ocw.mit.edu/courses/6-006-introduction-to-algorithms-spring-2020/) |
| **Abdul Bari** — Graph Traversal | DFS e BFS passo a passo | YouTube |

---

## Documentação e referência rápida

| Recurso | Conteúdo |
|---------|----------|
| [cp-algorithms — Graphs](https://cp-algorithms.com/graph/) | DFS, BFS, representações, C++ |
| [VisuAlgo — Graph](https://visualgo.net/en/graphds) | Visualização interativa de travessias |
| [cplusplus.com — vector](https://cplusplus.com/reference/vector/vector/) | Referência da classe `vector` |
| [USACO Guide — Graphs](https://usaco.guide/bronze/intro-graphs) | Introdução progressiva (inglês) |

---

## Plataformas de exercícios

### Por tema do Módulo 1

| Plataforma | Tema sugerido | Dificuldade |
|------------|---------------|-------------|
| [Beecrowd](https://www.beecrowd.com.br/) | Representação, DFS, BFS | Iniciante → intermediário |
| [Neps Academy](https://neps.academy/) | Módulo de grafos em PT-BR | Iniciante |
| [LeetCode](https://leetcode.com/tag/graph/) | DFS, BFS, componentes | Intermediário |
| [Codeforces](https://codeforces.com/) | Tags: dfs, bfs, graphs | Variável |

### Problemas recomendados por semana

| Semana | Lista da disciplina | Beecrowd (exemplos) | LeetCode |
|--------|---------------------|---------------------|----------|
| 1 (conceitos) | Lista 1 — revisão q. 1–10 | — | — |
| 2 (caminhos/graus) | Lista 1 — q. 11–16 | Problemas de modelagem simples | — |
| 3 (representação) | Lista 1 — q. 16 (modelar com código) | [1195](https://www.beecrowd.com.br/judge/problems/view/1195), [1979](https://www.beecrowd.com.br/judge/problems/view/1979) | — |
| 4 (DFS) | Lista 2 — q. 1–4, 6(a–b) | [1104](https://www.beecrowd.com.br/judge/problems/view/1104), [2406](https://www.beecrowd.com.br/judge/problems/view/2406) | [200. Number of Islands](https://leetcode.com/problems/number-of-islands/) |
| 5 (BFS/componentes) | Lista 2 — q. 5–7; Lista 3 — completa | [1847](https://www.beecrowd.com.br/judge/problems/view/1847), [2410](https://www.beecrowd.com.br/judge/problems/view/2410) | [994. Rotting Oranges](https://leetcode.com/problems/rotting-oranges/) |
| 6 (prática) | Revisar as 3 listas | Escolher 2 da lista acima sob tempo | Ver `modulo-1/06-pratica/problemas-leetcode.md` |

---

## Ferramentas úteis

| Ferramenta | Uso |
|------------|-----|
| [Graph Online](https://graphonline.top/en/) | Desenhar grafos e testar ideias |
| [Desmos](https://www.desmos.com/calculator) | Esboços (menos comum em grafos) |
| Compilador local `g++ -std=c++17` | Testar implementações |
| [Compiler Explorer](https://godbolt.org/) | Ver código assembly / debug rápido |

---

## Ordem de leitura sugerida (Módulo 1)

1. **Revisão da lista oficial** do tema ([materiais/listas/](materiais/listas/))
2. `01-teoria.md` do repositório
3. VisuAlgo ou vídeo curto (10–20 min) para fixar visualmente
4. **Exercícios da lista** da disciplina (tente antes de ver respostas)
5. Exercícios comentados deste repositório
6. Implementação em `codigo/`
7. 1–2 problemas em plataforma online
8. Revisão semanal com checklist do `README.md`

---

## Glossário rápido (PT ↔ EN)

| Português | Inglês |
|-----------|--------|
| Vértice / nó | Vertex / node |
| Aresta | Edge |
| Adjacência | Adjacency |
| Travessia / varredura | Traversal |
| Profundidade | Depth (DFS) |
| Largura | Breadth (BFS) |
| Componente conectado | Connected component |
| Grau | Degree |
| Grafo dirigido | Directed graph |
| Ponderado | Weighted |

Mantenha consistência com o material da disciplina; em provas internacionais (LeetCode) os termos em inglês aparecem com frequência.
