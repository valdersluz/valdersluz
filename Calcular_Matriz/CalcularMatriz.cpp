#include <iostream>
#include <vector>

using namespace std;

// Função para calcular a soma de duas matrizes
vector<vector<int>> somaMatrizes(const vector<vector<int>>& matriz1, const vector<vector<int>>& matriz2) {
    int linhas = matriz1.size();
    int colunas = matriz1[0].size();

    vector<vector<int>> resultado(linhas, vector<int>(colunas, 0));

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    return resultado;
}

int main() {
    int linhas, colunas;
    cout << "Digite o número de linhas: ";
    cin >> linhas;
    cout << "Digite o número de colunas: ";
    cin >> colunas;

    // Leitura da primeira matriz
    vector<vector<int>> matriz1(linhas, vector<int>(colunas, 0));
    cout << "Digite os elementos da primeira matriz:\n";
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cin >> matriz1[i][j];
        }
    }

    // Leitura da segunda matriz
    vector<vector<int>> matriz2(linhas, vector<int>(colunas, 0));
    cout << "Digite os elementos da segunda matriz:\n";
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cin >> matriz2[i][j];
        }
    }

    // Cálculo da soma das matrizes
    vector<vector<int>> resultado = somaMatrizes(matriz1, matriz2);

    // Exibição do resultado
    cout << "Resultado da soma das matrizes:\n";
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
