// 1551 - FRASE COMPLETA | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

#define dbvector(vector)          \
    {                             \
        cout << #vector << " = "; \
        for (auto &it : vector)   \
            cout << it << " ";    \
        cout << endl;             \
    }

int main()
{
    int n_casos;
    string frase;

    cin >> n_casos;
    cin.ignore();

    for (int i = 0; i < n_casos; i++)
    {
        int aux = 0;
        vector<int> alfabeto(26);

        getline(cin, frase);

        for (auto c : frase)
        {
            if (isalpha(c))
            {
                alfabeto[c - 'a']++;
            }
        }

        for (int j = 0; j < alfabeto.size(); j++)
        {
            if (alfabeto[j] > 0)
            {
                aux++;
            }
        }

        if (aux == 26)
        {
            cout << "frase completa" << endl;
        }
        else if (aux < 26 && aux >= 13)
        {
            cout << "frase quase completa" << endl;
        }
        else if (aux < 13)
        {
            cout << "frase mal elaborada" << endl;
        }
    }

    return 0;
}