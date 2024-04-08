// 2137 - A BIBLIOTECA DO SENHOR SEVERINO | RESOLVIDO EM C++

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    vector<string> C;

    while (cin >> N)
    {
        C.resize(N);
        for (int i = 0; i < C.size(); i++)
        {
            cin >> C[i];
        }

        sort(C.begin(), C.end());

        for (int i = 0; i < C.size(); i++)
        {
            cout << C[i] << endl;
        }
    }
}