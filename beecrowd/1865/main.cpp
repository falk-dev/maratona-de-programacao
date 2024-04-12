// 1865 - MJÖLNIR | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string P;
    int F, N;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> P >> F;
        if (P == "Thor")
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }

    return 0;
}