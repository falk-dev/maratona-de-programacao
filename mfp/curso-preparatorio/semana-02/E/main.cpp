/*
Link da questão: https://vjudge.net/contest/627742#problem/E
E - MEDIAN OF AN ARRAY | RESOLVIDO EM C++
Author: falk.dev
Complexidade: O (x * n log n) (x == n_casos)
*/

#include <bits/stdc++.h>

using namespace std;

#define dbvector(vector)          \
    {                             \
        cout << #vector << " = "; \
        for (auto &it : vector)   \
            cout << it << " ";    \
        cout << endl;             \
    }

#define SPEED                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

#define dbg(x) cout << #x << " = " << x << endl;

typedef long long ll;

#define f first;
#define s second;

int main()
{
    SPEED;

    int n_casos;

    cin >> n_casos;

    for (int i = 0; i < n_casos; i++)
    {
        int n_de_numeros, aux = 0;
        double mediana;

        cin >> n_de_numeros;

        vector<int> numeros_array(n_de_numeros);

        for (int i = 0; i < n_de_numeros; i++)
        {
            cin >> numeros_array[i];
        }

        mediana = (ceil(n_de_numeros / 2.0) - 1);

        sort(numeros_array.begin(), numeros_array.end());

        for (int i = mediana; i < n_de_numeros; i++)
        {
            if (numeros_array[i] == numeros_array[mediana])
            {
                aux++;
            }
            else
            {
                break;
            }
        }
        cout << aux << endl;
    }

    return 0;
}