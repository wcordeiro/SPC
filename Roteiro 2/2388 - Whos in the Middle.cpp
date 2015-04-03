#include <iostream>
#include <algorithm>    // std::sort
#include <vector>       // std::vector

using namespace std;

bool myfunction (int i,int j) { return (i<j); }

int main()
{
    int n;
    cin >>n;
    int cows[n];
    for (int i = 0; i < n;i ++){
        cin >> cows[i];
    }
    vector<int> myvector (cows,cows+n);
    std::sort (myvector.begin(),myvector.end(),myfunction);
    int i =1;
    for (vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it){
      if((n / 2) +1 == i)
        cout << *it;
      i++;
    }
    return 0;
}



