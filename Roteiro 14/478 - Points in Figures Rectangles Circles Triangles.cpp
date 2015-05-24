#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

#define EPS 1e-10

/* A utility function to calculate area of triangle formed by (x1, y1),
   (x2, y2) and (x3, y3) */
double area(double x1, double y1, double x2, double y2, double x3, double y3)
{
   return fabs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}

/* A function to check whether point P(x, y) lies inside the triangle formed
   by A(x1, y1), B(x2, y2) and C(x3, y3) */
bool isInside(double x1, double y1, double x2, double y2, double x3, double y3, double x, double y)
{
   /* Calculate area of triangle ABC */
   double A = area (x1, y1, x2, y2, x3, y3);

   /* Calculate area of triangle PBC */
   double A1 = area (x, y, x2, y2, x3, y3);

   /* Calculate area of triangle PAC */
   double A2 = area (x1, y1, x, y, x3, y3);

   /* Calculate area of triangle PAB */
   double A3 = area (x1, y1, x2, y2, x, y);

   /* Check if sum of A1, A2 and A3 is same as A */
   return (fabs(A - (A1 + A2 + A3)) <= EPS) ;
}

int main()
{
    vector < pair < string, vector <double> > > figures;
    string type;
    vector <double> pontos;
    double aux;
    cin >> type;
    while(type != "*"){
        if(type == "r"){
            for(int i = 0; i < 4; i++){
                cin >> aux;
                pontos.push_back(aux);
            }
        }
        else if(type == "c"){
            for(int i = 0; i < 3; i++){
                cin >> aux;
                pontos.push_back(aux);
            }
        }
        else{
            for(int i = 0; i < 6; i++){
                cin >> aux;
                pontos.push_back(aux);
            }
        }
        figures.push_back(pair <string,vector <double> > (type,pontos));
        pontos.clear();
        cin >> type;
    }
    double x,y;
    int j = 1;
    bool esta = false;
    cin >> x >> y;
    while(x != 9999.9 || y != 9999.9){
        for(unsigned int i = 0; i < figures.size();i++){
                if(figures[i].first == "c"){
                   double dist = sqrt(((x-figures[i].second[0])*(x-figures[i].second[0]))+((y-figures[i].second[1])*(y-figures[i].second[1])));
                   if(dist < figures[i].second[2]){
                      cout << "Point "<< j <<" is contained in figure " << i+1 << endl;
                      esta = true;
                   }
                }
                else if(figures[i].first == "r"){
                    if( x > figures[i].second[0] && x < figures[i].second[2] && y  < figures[i].second[1] && y > figures[i].second[3] ){
                        cout << "Point "<< j <<" is contained in figure " << i+1 << endl;
                        esta = true;
                    }
                }
                else{
                   if(isInside(figures[i].second[0],figures[i].second[1],figures[i].second[2],figures[i].second[3],figures[i].second[4],figures[i].second[5],x,y)){
                      cout << "Point "<< j <<" is contained in figure " << i+1 << endl;
                      esta = true;
                   }

                }
        }
        if(esta == false){
           cout << "Point " << j <<" is not contained in any figure" << endl;
        }
        esta = false;
        cin >> x >> y;
        j++;
    }
    return 0;
}
