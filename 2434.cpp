// 2434 - SALDO DO VOVÔ | RESOLVIDO EM C++

#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    int S = 0;
    int SD = 0;
    int i = 0;
    int aux = 0;

    cin >> N >> S;
    
    aux = S;

    for (i = 0; i < N; i++)
    {
        cin >> SD;
        S = S + SD;

        if (S < aux) {
            aux = S;
        }
    }

    cout << aux << endl;

    return 0;
}