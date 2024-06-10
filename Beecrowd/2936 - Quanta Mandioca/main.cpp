// 2936 - QUANTA MANDIOCA? | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Q = 0, aux = 225;
    vector<int> X{300, 1500, 600, 1000, 150};

    for (int i = 0; i < 5; i++)
    {
        cin >> Q;
        aux = aux + Q * X[i];
    }

    cout << aux << endl;

    return 0;
}