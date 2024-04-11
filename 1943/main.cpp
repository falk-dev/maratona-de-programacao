// 1943 - TOP N | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int K;

    cin >> K;

    cout << "Top ";

    if (K == 1)
    {
        cout << "1" << endl;
    }

    if (K >= 2 && K <= 3)
    {
        cout << "3" << endl;
    }

    if (K >= 4 && K <= 5)
    {
        cout << "5" << endl;
    }

    if (K >= 6 && K <= 10)
    {
        cout << "10" << endl;
    }

    if (K >= 11 && K <= 25)
    {
        cout << "25" << endl;
    }

    if (K >= 26 && K <= 50)
    {
        cout << "50" << endl;
    }

    if (K >= 51 && K <= 100)
    {
        cout << "100" << endl;
    }

    return 0;
}