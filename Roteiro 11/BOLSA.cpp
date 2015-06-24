#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

struct lesser{
    bool operator()(const double& a, const double& b) const{
        return a > b;
    }
};

int main()
{


    int n;
    cin >> n;
    vector <double> Comp,Venda;
    while(n != 0){
        Comp.clear();
        Venda.clear();
        make_heap(Comp.begin(),Comp.end());
        make_heap(Venda.begin(),Venda.end(),lesser());
        string tipo;
        double din;
        double resp = 0;
        for(int i = 0; i < n; i++){
            cin >> tipo >> din;
            if(tipo == "C"){
                if(!Venda.empty() && din >= Venda.front()){
                     resp += din - Venda.front();
                    // pop_heap (Venda.begin(),Venda.end(),lesser());
                     Venda.pop_back();
                }
                else{
                    Comp.push_back(din);
                    push_heap (Comp.begin(),Comp.end());
                }
            }
            else{
                if(!Comp.empty() && din <= Comp.front()){
                     resp += Comp.front() - din;
                 //    pop_heap (Comp.begin(),Comp.end());
                     Comp.pop_back();
                }
                else{
                    Venda.push_back(din);
                    push_heap (Venda.begin(),Venda.end(),lesser());
                }
            }
          //  cout << i << " " << resp;
        }
        printf("%.2f\n", resp);

        cin >> n;
    }
    return 0;
}

