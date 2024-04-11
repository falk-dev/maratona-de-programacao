// 185 - MACPRONALTS | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p = 0, c = 0, q = 0;
    double aux = 0, v = 0;

    cin >> p;

    for (int i = 0; i < p; i++)
    {
        cin >> c >> q;

        if (c == 1001)
        {
            v = 1.5;
        }
        if (c == 1002)
        {
            v = 2.5;
        }
        if (c == 1003)
        {
            v = 3.5;
        }
        if (c == 1004)
        {
            v = 4.5;
        }
        if (c == 1005)
        {
            v = 5.5;
        }

        aux = aux + v * q;
    }

    cout << fixed << setprecision(2);
    cout << aux << endl;

    return 0;
}