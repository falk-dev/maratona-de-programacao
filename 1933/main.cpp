// 1933 - TRI-DU | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int C1, C2;

    cin >> C1 >> C2;

    if (C1 == C2)
    {
        cout << C1 << endl;
    }

    if (C1 != C2)
    {
        if (C1 > C2)
        {
            cout << C1 << endl;
        }
        else
        {
            cout << C2 << endl;
        }
    }

    return 0;
}