#include <stdio.h>
#include <iostream>
#define nmax 101

using namespace std;

void preenche(int adj[nmax][nmax], int gasto[], int vis[], int x) {
    for (int i = 0; i <= x; i++) {
        gasto[i] = -1;
        vis[i] = 0;
        for (int j = 0; j <= x; j++) {
            adj[i][j] = -1;
        }
    }
}

int main(){
    int adj[nmax][nmax], gasto[nmax], visitado[nmax];
    int n, m, x, y, t, inicio, fim, minimo;
    while (cin >> n >> m) {
        if (n == 0 && m == 0) {
            break;
        }
        preenche(adj, gasto, visitado, n);
        for (int i = 0; i < m; i++) {
            cin >> x >> y >> t;
            adj[x][y] = t;
        }
        cin >> inicio >> fim; 
        gasto[inicio] = 0;
        // Utilizando o algoritmo de Dijkstra para caminho minimo
        while (fim != 0) {
            minimo = -1;
            for (int i = 1; i <= n; i++) {
                if (gasto[i] != -1 && visitado[i] == 0) {
                    if (gasto[minimo] > gasto[i] || minimo == -1) { 
                        minimo = i;
                    }
                }
            }
            if (minimo == -1) {
                cout << gasto[fim] << "\n";
                break;
            }
            for (int i = 1; i <= n; i++) {
                int a = gasto[minimo] + adj[minimo][i];
                if ((gasto[i] > a || gasto[i] == -1) && adj[minimo][i] != -1)
                    gasto[i] = a;
            }
            visitado[minimo] = 1;
        }
        if (minimo != -1) {
            cout << -1 << "\n";
        }
    }
}

