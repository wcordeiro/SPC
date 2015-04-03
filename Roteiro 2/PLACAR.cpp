#include <iostream>

using namespace std;

int main()
{
    int n;
    int notas[200];
    string nomes[200];
    int auxI;
    int ii = 0;
    string auxN;
    int k =1;
    while(cin >> n){
        for( int i =0; i < n; i++ ){
            cin >> nomes[i] >> notas[i];
        }
         for( int x = 0; x < n; x++ )
         {
            for(int y = x + 1; y < n; y++ ) // sempre 1 elemento Ã  frente
            {
               if ( notas[x] > notas[y] )
               {
                  auxI = notas[x];
                  auxN = nomes[x];
                  notas[x] = notas[y];
                  nomes[x] = nomes[y];
                  notas[y] = auxI;
                  nomes[y] = auxN;
               }
               else if( notas[x] == notas[y] ){
                   if ( (int) nomes[x][0] < (int) nomes[y][0] )
                   {
                       auxI = notas[x];
                       auxN = nomes[x];
                       notas[x] = notas[y];
                       nomes[x] = nomes[y];
                       notas[y] = auxI;
                       nomes[y] = auxN;
                   }
                  // cout <<nomes[x][ii] << " "<< nomes[y][ii];
                   while(nomes[x][ii] == nomes[y][ii]){
                      ii++;
                   //   cout <<nomes[x][ii] << " "<< nomes[y][ii];
                   }
                     if ( (int) nomes[x][ii] < (int) nomes[y][ii] )
                   {
                       auxI = notas[x];
                       auxN = nomes[x];
                       notas[x] = notas[y];
                       nomes[x] = nomes[y];
                       notas[y] = auxI;
                       nomes[y] = auxN;
                   }
                   ii=0;
               }
            }
         }
         cout << "Instancia "<< k <<endl<< nomes[0] <<endl;
         k++;
    }
    return 0;
}


