// 1095 - SEQUENCIA IJ1 | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int j = 60;

    for (int i = 1; j >= 0; i = i + 3)
    {
        cout << "I=" << i << " J=" << j << endl;
        j = j - 5;
    }

    return 0;
}