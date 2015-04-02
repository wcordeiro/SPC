#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

bool myfunction (int i,int j) { return (i<j); }

int main()
{
    int n;
    cin >> n;
    int mat [200][200]= {};
    int ii=0,jj=0,nn = n,nnn = n;
    while( n!=0 ){
        while(n > 0){
            if(ii != 0){
                nn = nn - 1;
            }
            for (int i = ii; i < nn; i ++){
                for (int j = jj; j < nn; j ++){
                    mat[i][j] += 1;
                }
            }
            n = n-2;
            ii += 1;
            jj += 1;
        }
        for (int i = 0; i < nnn; i ++){
            for (int j = 0; j < nnn; j ++){
               if ( j == nnn-1 )
               {
                  printf("%3d", mat[i][j]);
                 // printf("\n");
               }
               else
               {
                  printf("%3d ", mat[i][j]);
               }
            }
            printf("\n");
        }
        printf("\n");
        ii = 0;
        jj = 0;
        for (int i = 0; i < nnn; i ++){
           for (int j = 0; j < nnn; j ++){
                mat[i][j] = 0;
           }
        }
        cin >> n;
        nn = n;
        nnn = n;
    }
    return 0;
}
