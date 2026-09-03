// BFS — travessia em largura
// TODO: completar a função bfs
// Compile: g++ -std=c++17 bfs.cpp -o bfs

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> adj;
vector<bool> visitado;

// TODO: BFS a partir de origem; imprimir ordem de visita
void bfs(int origem) {
    // dica: use queue<int> fila;
    // seu código aqui
}

int main() {
    int n, m;
    cin >> n >> m;

    adj.assign(n, {});
    visitado.assign(n, false);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int origem;
    cin >> origem;

    cout << "Ordem BFS: ";
    bfs(origem);
    cout << endl;

    return 0;
}
