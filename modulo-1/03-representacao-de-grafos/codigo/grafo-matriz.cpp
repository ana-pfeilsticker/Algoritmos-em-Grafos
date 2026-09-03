// Grafo representado por matriz de adjacências
// TODO: completar as funções marcadas com TODO
// Compile: g++ -std=c++17 grafo-matriz.cpp -o grafo-matriz

#include <iostream>
#include <vector>
using namespace std;

class GrafoMatriz {
    int n;
    vector<vector<int>> adj;

public:
    // TODO: construtor — inicializar matriz n×n com zeros
    GrafoMatriz(int vertices) : n(vertices), adj(vertices, vector<int>(vertices, 0)) {}

    // TODO: adicionar aresta não dirigida entre u e v
    void adicionarAresta(int u, int v) {
        // seu código aqui
    }

    // TODO: retornar true se existe aresta entre u e v
    bool temAresta(int u, int v) const {
        // seu código aqui
        return false;
    }

    void imprimir() const {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << adj[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    GrafoMatriz g(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g.adicionarAresta(u, v);
    }

    g.imprimir();
    return 0;
}
