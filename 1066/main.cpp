// 1066 - PARES, ÍMPARES, POSITIVOS E NEGATIVOS | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int pares = 0;
    int impares = 0;
    int positivos = 0;
    int negativos = 0;
    int N = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> N;

        if (N > 0)
        {
            positivos++;
        }
        if (N < 0)
        {
            negativos++;
        }

        if (N % 2 == 0)
        {
            pares++;
        }
        if (N % 2 != 0)
        {
            impares++;
        }
    }

    cout << pares << " valor(es) par(es)" << endl;
    cout << impares << " valor(es) impar(es)" << endl;
    cout << positivos << " valor(es) positivo(s)" << endl;
    cout << negativos << " valor(es) negativo(s)" << endl;

    return 0;
}