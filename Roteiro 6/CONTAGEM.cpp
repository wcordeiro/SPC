#include <iostream>
#include <vector>

using namespace std;

int main()
{
        string s;
        int palavra = 1;
        
        while (cin >> s)
        {
                int size = s.length();
                int v[size];
                long long r = 0;
                long long q = 1;
                
                for (int i = 0; i < size; i++)
                {
                        if (s[i] == 'b')
                        {
                                v[i] = 1;
                        }
                        else if (s[i] == 'a')
                        {
                                v[i] = 0;
                        }
                }
                
                for (int i = (size - 1); i >= 0; i--)
                {
                        q = 1;
                        if (v[i] == 1)
                        {
                                for (int j = i; j < (size - 1); j++)
                                {
                                        q *= 2;
                                }
                                r += q;
                        }
                }
                
                cout << "Palavra " << palavra << endl;
                cout << r << endl << endl;
                palavra++;
        }
}
