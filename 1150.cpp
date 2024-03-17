// 1150 - ULTRAPASSANDO Z | RESOLVIDO EM C++

#include <iostream>

using namespace std;

int main()
{
    int X = 0;
    int Z = 0;
    int aux = 1;

    cin >> X;

    int soma = X;

    while (X >= Z)
    {
        cin >> Z;
    }

    do
    {
        X++;
        soma = soma + X;
        aux++;
    } while (soma < Z);

    cout << aux << endl;
}