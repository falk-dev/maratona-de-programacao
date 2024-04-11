// 2344 - NOTAS DA PROVA | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    cin >> N;

    if (N == 0) {
        cout << "E" << endl;
    }

    if (N >= 1 && N <= 35) {
        cout << "D" << endl;
    }

    if (N >= 36 && N <= 60) {
        cout << "C" << endl;
    }

    if (N >= 61 && N <= 85) {
        cout << "B" << endl;
    }

    if (N >= 86 && N <= 100) {
        cout << "A" << endl;
    }

    return 0;
}