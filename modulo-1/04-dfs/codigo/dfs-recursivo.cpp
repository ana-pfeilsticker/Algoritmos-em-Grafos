// DFS recursivo
// TODO: completar a função dfs
// Compile: g++ -std=c++17 dfs-recursivo.cpp -o dfs-recursivo

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> adj;
vector<bool> visitado;

// TODO: implementar DFS recursivo a partir do vértice u
void dfs(int u) {
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
        adj[v].push_back(u);  // não dirigido
    }

    int origem;
    cin >> origem;

    cout << "Ordem DFS: ";
    dfs(origem);
    cout << endl;

    return 0;
}
