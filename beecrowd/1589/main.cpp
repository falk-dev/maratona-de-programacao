// 1589 - BOB CONDUITE | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, R1, R2, aux;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> R1 >> R2;

        aux = R1 + R2;

        cout << aux << endl;
    }

    return 0;
}