#include <stdio.h>
#include <iostream>
#include <math.h>
#include<string>

using namespace std;

int main (void)
{
    string entrada,result;
    while(cin >> entrada){
        result.clear();
        for(unsigned int i = 0; i < entrada.size(); i++){
            if(entrada[i] == 'A' || entrada[i] == 'B' ||entrada[i] == 'C')
                result += '2';
            else if(entrada[i] == 'D' || entrada[i] == 'E' ||entrada[i] == 'F')
                result += '3';
            else if(entrada[i] == 'G' || entrada[i] == 'H' ||entrada[i] == 'I')
                result += '4';
            else if(entrada[i] == 'J' || entrada[i] == 'K' ||entrada[i] == 'L')
                result += '5';
            else if(entrada[i] == 'N' || entrada[i] == 'O' ||entrada[i] == 'M')
                result += '6';
            else if(entrada[i] == 'Q' || entrada[i] == 'R' ||entrada[i] == 'S'||entrada[i] == 'P')
                result += '7';
            else if(entrada[i] == 'T' || entrada[i] == 'U' ||entrada[i] == 'V')
                result += '8';
            else if(entrada[i] == 'W' || entrada[i] == 'X' ||entrada[i] == 'Y' ||entrada[i] == 'Z')
                result += '9';
            else
                result += entrada[i];
        }
        cout << result << endl;
    }
    return 0;
}


