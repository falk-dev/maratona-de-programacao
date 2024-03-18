// 1020 - IDADE EM DIAS | RESOLVIDO EM C++

#include <iostream>

using namespace std;

int main()
{
    int D = 0;
    int A = 0;
    int M = 0;
    int DI = 0;
    int i = 0;

    cin >> D;

    for (i = 0; i < D; i++)
    {
        while (D >= 365)
        {
            A++;
            D = D - 365;
        }
        while (D >= 30)
        {
            M++;
            D = D - 30;
        }
    }

    cout << A << " ano (s)" << endl;
    cout << M << " mes (es)" << endl;
    cout << D << " dia (s)" << endl;
}