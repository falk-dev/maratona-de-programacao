// C - BEAT THE SPREAD! || RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s, d, x1 = 0, x2 = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s >> d;

        if ((s + d) % 2 == 0 && (s - d) >= 0)
        {
            x2 = abs((d - s) / 2);
            x1 = s - x2;

            cout << x1 << " " << x2 << endl;
        }
        else
        {
            cout << "impossible" << endl;
        }
    }

    return 0;
}