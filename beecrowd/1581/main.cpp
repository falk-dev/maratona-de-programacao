// 1581 - CONVERSA INTERNACIONAL | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int casos_teste, pessoas;
    vector<string> idiomas;

    cin >> casos_teste;

    for (int i = 0; i < casos_teste; i++)
    {
        cin >> pessoas;

        idiomas.resize(pessoas);

        for (int j = 0; j < idiomas.size(); j++)
        {
            cin >> idiomas[j];
        }

        sort(idiomas.begin(), idiomas.end());

        if (idiomas[0] != idiomas[pessoas - 1])
        {
            cout << "ingles" << endl;
        }
        else
        {
            cout << idiomas[0] << endl;
        }
    }

    return 0;
}