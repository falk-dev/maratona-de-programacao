// 2556 - REINAUGURAÇÃO DO CEI | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N = 0;
    vector<int> NA;

    while (cin >> N)
    {
        NA.resize(N);

        int C = N / 2;

        for (int i = 0; i < NA.size(); i++)
        {
            cin >> NA[i];
        }

        sort(NA.begin(), NA.end());

        int M = NA[C] - NA[C - 1];

        cout << C << " " << M << endl;
    }
}