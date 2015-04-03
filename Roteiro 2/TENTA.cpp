#include <iostream>
#include <algorithm>    // std::sort
#include <vector>       // std::vector

using namespace std;

#include <stdio.h>

void print(const int *v, const int size)
{
  if (v != 0) {
    for (int i = 0; i < size; i++) {
      printf("%d ", v[i] );
    }
    printf("\n");
  }
} // print

void swap(int *v, const int i, const int j)
{
  int t;
  t = v[i];
  v[i] = v[j];
  v[j] = t;
}


void rotateLeft(int *v, const int start, const int n)
{
  int tmp = v[start];
  for (int i = start; i < n-1; i++) {
    v[i] = v[i+1];
  }
  v[n-1] = tmp;
} // rotateLeft


void permute(int *v, const int start, const int n)
{
   print(v,n);
  if (start < n) {
    int i, j;
    for (i = n-2; i >= start; i--) {
      for (j = i + 1; j < n; j++) {
	swap(v, i, j);
	permute(v, i+1, n);
      } // for j
      rotateLeft(v, i, n);
    } // for i
  }
} // permute

int main()
{
    int n;
    cin >>n;
    int vet[10];
    for(int i =0; i < 10; i++){
        vet[i] = 0;
    }
    int aux;
    while(n != 0){
        for (int i =0 ; i < n ; i ++){
            cin >> vet[i];
        }
         for( int x = 0; x < n; x++ )
         {
            for(int y = x + 1; y < n; y++ ) // sempre 1 elemento à frente
            {
              if ( vet[x] > vet[y] )
              {
                  aux = vet[x];
                  vet[x] = vet[y];
                  vet[y] = aux;
              }
           }
        }
        permute(vet,0,n);
        cin >> n;
    }
    return 0;
}


