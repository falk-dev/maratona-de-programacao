// 1019 - CONVERSÃO DE TEMPO | RESOLVIDO EM C++

#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    int H = 0;
    int M = 0;
    int i = 0;

    cin >> N;

    for (i = 0; i < N; i++)
    {
        while (N >= 3600)
        {
            H++;
            N = N - 3600;
        }
        while (N >= 60)
        {
            M++;
            N = N - 60;
        }
    }

    cout << H << ":" << M << ":" << N << endl;
}