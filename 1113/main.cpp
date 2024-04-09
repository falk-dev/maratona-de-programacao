// 1113 - CRESCENTE E DECRESCENTE | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int X, Y;

    while (X != Y)
    {
        cin >> X >> Y;

        if (X > Y)
        {
            cout << "Decrescente" << endl;
        }
        if (Y > X)
        {
            cout << "Crescente" << endl;
        }
    }

    return 0;
}