#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;


int main()
{
    int v[16] = {1};
    for(int j =0; j < 16 ; j++){
                v[j] = 1;

        }
    int v1,v2;
    for (int i=0; i < 16 ;i+=2 ){
        cin >> v1 >> v2;
        if(v1 > v2){
            v[i+1] = 0;
        }
        else {
            v[i] = 0;
        }
    }
    for (int i=0; i < 16 ;i+=4 ){
        cin >> v1 >> v2;
        if(v1 > v2){
            v[i+2] = 0;
            v[i+3] = 0;
        }
        else {
            v[i+1] = 0;
            v[i] = 0;
        }
    }
    for (int i=0; i < 16 ;i+=8 ){
        cin >> v1 >> v2;
        if(v1 > v2){
            for(int j =i+4; j < i+8 ; j++){
                v[j] = 0;
            }
        }
        else {
            for(int j =i+0; j < i+4 ; j++){
                v[j] = 0;
            }
        }
    }
    cin >> v1 >> v2;
        if(v1 > v2){
            for(int j =8; j < 16 ; j++){
                v[j] = 0;
            }
        }
        else {
            for(int j =0; j < 8 ; j++){
                v[j] = 0;
            }
        }
        for(int j =0; j < 16 ; j++){
                if(v[j] == 1){
                 printf("%c", j +65);
                }
            }
    return 0;
}


