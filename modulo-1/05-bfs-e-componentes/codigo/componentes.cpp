// Detecção de componentes conectados
// TODO: completar contarComponentes e dfs/bfs auxiliar
// Compile: g++ -std=c++17 componentes.cpp -o componentes

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> adj;
vector<bool> visitado;

// TODO: marcar todos os vértices do componente de u (DFS ou BFS)
void explorar(int u) {
    // seu código aqui
}

// TODO: retornar número de componentes conectados
int contarComponentes(int n) {
    // seu código aqui
    return 0;
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

    cout << "Componentes: " << contarComponentes(n) << endl;
    return 0;
}
