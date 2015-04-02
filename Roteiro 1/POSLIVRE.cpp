#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int w,n,h;
    int x1,y1,x2,y2;
    cin >> w >> h >> n;
    int mat[600][600];
    int poslivres = 0 ;
    string linha;
    int tmp;
    for(int i = 0; i < 600; i++ ){
                for(int j = 0; j < 600;j++){
                   mat[i][j] = 0;
                }
    }
    while(n !=0 || h !=0 || w !=0){
        while(n!=0){
            cin >>x1 >>y1>>x2>>y2;
            if ( x2 < x1){
                tmp = x1;
                x1 = x2;
                x2 = tmp;
            }
            if ( y2 < y1){
                tmp = y1;
                y1 = y2;
                y2 = tmp;
            }
            for(int i = (x1-1); i < x2; i++ ){
                for(int j = (y1-1); j < y2;j++){
                    mat[i][j] = 1;
                }
            }
            n--;
        }
        for(int i = 0; i < w; i++ ){
           for(int j = 0; j < h;j++){
               if(mat[i][j] == 0){
                      poslivres++;
               }
           }
        }
        if(poslivres == 0){
            cout << "There is no empty spots." << endl;
        }
        else if(poslivres == 1){
            cout << "There is one empty spot." << endl;
        }
        else{
            cout << "There are "<<poslivres<<" empty spots." << endl;
        }
        for(int i = 0; i < 600; i++ ){
            for(int j = 0; j < 600;j++){
                   mat[i][j] = 0;
            }
        }
        poslivres = 0;
        //scanf("%s",&linha);
        cin >> w >> h >> n;

    }

    return 0;
}


