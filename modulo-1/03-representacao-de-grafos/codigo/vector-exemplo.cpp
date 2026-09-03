// Exemplo básico da classe vector em C++
// Compile: g++ -std=c++17 vector-exemplo.cpp -o vector-exemplo && ./vector-exemplo

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Criação
    vector<int> vazio;
    vector<int> com_tamanho(5);       // {0,0,0,0,0}
    vector<int> com_valor(5, 10);     // {10,10,10,10,10}

    // Adicionar elementos
    vazio.push_back(1);
    vazio.push_back(2);
    vazio.push_back(3);

    // Acesso
    cout << "vazio[0] = " << vazio[0] << endl;
    cout << "tamanho = " << vazio.size() << endl;

    // Percorrer
    cout << "Elementos: ";
    for (int x : vazio) cout << x << " ";
    cout << endl;

    // vector de vectors (útil para grafos)
    int n = 4;
    vector<vector<int>> adj(n);
    adj[0] = {1, 2};
    adj[1] = {0, 3};
    adj[2] = {0};
    adj[3] = {1};

    cout << "Vizinhos do vertice 0: ";
    for (int viz : adj[0]) cout << viz << " ";
    cout << endl;

    return 0;
}
