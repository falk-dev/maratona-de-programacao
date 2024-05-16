/*
Link da questão: https://vjudge.net/contest/627742#problem/C
E - WATER STATION | RESOLVIDO EM C++
Author: falk.dev
Complexidade:
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

    bool auxiliar = false;
    int km, dif = INT_MAX, aux;
    vector<int> distancias{0, 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100};

    cin >> km;

    for (int i = 0; i < distancias.size(); i++)
    {
        if (km != distancias[0] && km != distancias[20])
        {
            if (abs(km - distancias[i]) < dif)
            {
                dif = abs(km - distancias[i]);
                aux = distancias[i];
                auxiliar = true;
            }
        }
        else
        {
            auxiliar = false;
            break;
        }
    }

    if (auxiliar == true)
    {
        cout << aux << endl;
    }
    else
    {
        cout << km << endl;
    }

    return 0;
}