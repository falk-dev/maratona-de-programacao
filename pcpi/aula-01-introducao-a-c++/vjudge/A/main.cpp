// A - WATERMELON || RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int w, aux = 0;

    cin >> w;

    aux = w - 2;

    if (w > 2)
    {
        if (aux % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}