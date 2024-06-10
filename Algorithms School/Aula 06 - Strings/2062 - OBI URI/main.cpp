// 2062 - OBI URI | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n_palavras;
    string palavra;

    cin >> n_palavras;

    for (int i = 0; i < n_palavras; i++)
    {
        cin >> palavra;

        if (palavra.size() <= 3)
        {
            if ((palavra[0] == 'U' && palavra[1] == 'R' && palavra[2] != 'I') || (palavra[0] == 'O' && palavra[1] == 'B' && palavra[2] != 'I'))
            {
                palavra[2] = 'I';

                cout << palavra;
            }
            else
            {
                cout << palavra;
            }
        }
        else
        {
            cout << palavra;
        }

        if (i == n_palavras - 1)
        {
            cout << endl;
        }
        else
        {
            cout << " ";
        }
    }

    return 0;
}