#include <stdio.h>
#include <iostream>
#include <queue>

#define MAX 100

using namespace std;

bool visitado[MAX];
int cor[MAX];

int main()
{
        int convidados, relacoes;
        int matriz[MAX][MAX];
        int instancia = 1;

        while (cin >> convidados >> relacoes)
        {
                int origem, destino;

                for (int i = 0; i < convidados; i++)
                {
                        for (int j = 0; j < convidados; j++)
                        {
                                matriz[i][j] = 0;
                        }

                        cor[i] = -1;
                        visitado[i] = false;
                }

                for (int i = 0; i < relacoes; i++)
                {
                        scanf("%d %d", &origem, &destino);

                        origem--;
                        destino--;

                        matriz[origem][destino] = 1;
                        matriz[destino][origem] = 1;
                }

                queue<int> fila;

                bool flag = true;
                for (int i = 0; (i < convidados) && (flag); i++)
                {
                        for (int j = 0; (j < convidados) && (flag); j++)
                        {
                                if (matriz[i][j] == 1)
                                {
                                        origem = i;
                                        break;
                                }
                        }
                }

                fila.push(origem);
                cor[origem] = 0;
                flag = true;

                while ((!fila.empty()) && (flag))
                {
                        origem = fila.front();
                        fila.pop();

                        visitado[origem] = true;

                        for (int i = 0; (i < convidados) && (flag); i++)
                        {
                                if (matriz[origem][i] == 1)
                                {
                                        if (visitado[i] == false)
                                        {
                                                if (cor[i] == -1)
                                                {
                                                        if (cor[origem] == 0)
                                                        {
                                                                cor[i] = 1;
                                                        }
                                                        else if (cor[origem] == 1)
                                                        {
                                                                cor[i] = 0;
                                                        }

                                                        visitado[i] = true;
                                                        fila.push(i);
                                                }
                                        }
                                        else
                                        {
                                                if (cor[origem] == cor[i])
                                                {
                                                        flag = false;
                                                }
                                        }
                                }
                        }
                }

                cout << "Instancia " << instancia++ << endl;
                if (flag)
                {
                        cout << "sim" << endl;
                }
                else
                {
                        cout << "nao" << endl;
                }
                cout << endl;
        }

        return 0;
}
