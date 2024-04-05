// 1018 - CÉDULAS | RESOLVIDO EM C++

#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    int i = 0;
    int j = 0;

    cin >> N;

    cout << N << endl;

    for (i = 0; N > 0; i++)
    {
        for (j = 0; N >= 100; j++)
        {
            N = N - 100;
        }
        cout << j << " nota(s) de R$ 100,00" << endl;

        for (j = 0; N >= 50; j++)
        {
            N = N - 50;
        }
        cout << j << " nota(s) de R$ 50,00" << endl;

        for (j = 0; N >= 20; j++)
        {
            N = N - 20;
        }
        cout << j << " nota(s) de R$ 20,00" << endl;

        for (j = 0; N >= 10; j++)
        {
            N = N - 10;
        }
        cout << j << " nota(s) de R$ 10,00" << endl;

        for (j = 0; N >= 5; j++)
        {
            N = N - 5;
        }
        cout << j << " nota(s) de R$ 5,00" << endl;

        for (j = 0; N >= 2; j++)
        {
            N = N - 2;
        }
        cout << j << " nota(s) de R$ 2,00" << endl;

        for (j = 0; N >= 1; j++)
        {
            N = N - 1;
        }
        cout << j << " nota(s) de R$ 1,00" << endl;
    }

    return 0;
}