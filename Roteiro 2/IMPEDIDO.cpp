#include <iostream>

using namespace std;

int main()
{
    int A,B;
    int vetA[13],vetB[13];
    cin >> A >> B;
    int n =0;
    bool imp =false;
    while(A !=0 && B!=0){
        for(int i = 0 ; i < A; i++){
            cin >> vetA[i];
        }
        for(int i = 0 ; i < B; i++){
            cin >> vetB[i];
        }
        for(int i = 0 ; i < A; i++){
            for(int j = 0 ; j < B; j++){
                if(vetA[i] >= vetB[j]){
                    n++;
                }
             }
             if(n < 2){
                imp = true;
             }
             n = 0;
        }
        if(imp){
          cout << "Y" <<endl;
        }
        else {
          cout << "N" <<endl;
        }
        imp = false;
        cin >> A >> B;
    }
    return 0;
}



