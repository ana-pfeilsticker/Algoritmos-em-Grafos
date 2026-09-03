// DFS iterativo (com pilha)
// TODO: completar a função dfsIterativo
// Compile: g++ -std=c++17 dfs-iterativo.cpp -o dfs-iterativo

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<vector<int>> adj;
vector<bool> visitado;

// TODO: implementar DFS iterativo a partir do vértice origem
void dfsIterativo(int origem) {
    // dica: use stack<int> pilha;
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

    cout << "Ordem DFS (iterativo): ";
    dfsIterativo(origem);
    cout << endl;

    return 0;
}
