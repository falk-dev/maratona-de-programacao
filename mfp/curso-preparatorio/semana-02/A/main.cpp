/*
Link da questão: https://vjudge.net/contest/627742#problem
A - CHORD | RESOLVIDO EM C++
Author: falk.dev
Complexidade: O(n)
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

    string word;
    bool aux = false;
    vector<string> palavras{"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};

    cin >> word;

    for (int i = 0; i < palavras.size(); i++)
    {
        if (word == palavras[i])
        {
            aux = true;
            break;
        }
        else
        {
            continue;
        }
    }

    if (aux == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}