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
    int mat [100][100];
    int aux1, aux2;
    while ( cin >> n){
    	aux1 = 0;
    	aux2 = n-1;
    	for(int i = 0; i < n; i++){
    		for(int j = 0; j < n; j++){
                if(i == aux1 && j == aux2){
    		    	mat[i][j] = 2;
    		    	aux1++;
    		    	aux2--;
    		    }
                else if(i == j){
    		    	mat[i][j] = 1;
    		    }
    		    else{
    		    	mat[i][j] = 3;
    		    }
			}
    	}
    	for(int i = 0; i < n; i++){
    		for(int j = 0; j < n; j++){
    			cout << mat[i][j];
    		}
    		cout << endl;
       }
    }
    return 0;
}
