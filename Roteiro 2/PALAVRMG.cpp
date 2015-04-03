#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <cctype>

using namespace std;


int main()
{
    int n;
    cin >> n;
    string palavra;
    bool ord = true;
    int ant = -1;
    while ( n !=0){
        cin >> palavra;

        for( int i =0;i < (int) palavra.length(); i ++){
            if((int) (tolower(palavra[i])) <= ant){
                ord = false;
                break;
            }
            ant = (int) (tolower(palavra[i]));
        //    cout << ant;
        }
        cout << palavra <<": ";
        if(ord){
          cout <<"O"<<endl;
        }
        else{
            cout << "N" << endl;
        }
        ord = true;
        ant = -1;
        n--;
    }
    return 0;
}


