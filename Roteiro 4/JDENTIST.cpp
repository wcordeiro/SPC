#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <deque>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <fstream>

using namespace std;


void func (vector<pair<long int, long int> > &v){

	long int cnt, atual;

	atual = 0;
	cnt = 1;

	for (unsigned int cont=1; cont < v.size(); cont++){
		if (v[cont].first >= v[atual].second){
			// cout << v[atual].first << ' ' << v[atual].second << " - " << v[cont].first << ' ' << v[cont].second << endl;
			cnt++;
			atual = cont;
		}
	}

	cout << cnt <<endl;
}

bool compare (pair <long int, long int> v1,pair <long int, long int> v2){
    return v1.second <v2.second;
}

void imprime (vector<pair<int, int> > v){
	for (int cont=v.size()-1; cont>=0; cont--){
		cout << v[cont].first << ' ' << v[cont].second << endl;
	}
}

int main (){

	vector<pair<long int, long int> > v;
	long int n, start, end;

	ios::sync_with_stdio(false);

	cin >> n;

	for (long int cont=0; cont<n; cont++){
		cin >> start >> end;
		v.push_back (make_pair (start, end));
	}
    sort(v.begin(),v.end(),compare);

	func (v);



	return 0;
}
