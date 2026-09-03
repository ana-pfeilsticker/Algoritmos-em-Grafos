// Grafo representado por lista de adjacências
// TODO: completar as funções marcadas com TODO
// Compile: g++ -std=c++17 grafo-lista.cpp -o grafo-lista

#include <iostream>
#include <vector>
using namespace std;

class GrafoLista {
    int n;
    vector<vector<int>> adj;

public:
    // TODO: construtor — criar n listas vazias
    GrafoLista(int vertices) : n(vertices), adj(vertices) {}

    // TODO: adicionar aresta não dirigida entre u e v
    void adicionarAresta(int u, int v) {
        // seu código aqui
    }

    // TODO: retornar true se v está na lista de adjacência de u
    bool temAresta(int u, int v) const {
        // seu código aqui
        return false;
    }

    void imprimir() const {
        for (int i = 0; i < n; i++) {
            cout << i << ": ";
            for (int viz : adj[i])
                cout << viz << " ";
            cout << endl;
        }
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    GrafoLista g(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g.adicionarAresta(u, v);
    }

    g.imprimir();
    return 0;
}
