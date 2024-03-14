#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    char P;
    int M = 0;
    int i = 0;

    cin >> N;
    cin >> P;

    for (i = 0; i < N; i++)
    {
        cin >> M;

        if (P == 'A' && M == 1)
        {
            P = 'B';
        }
        else if (P == 'B' && M == 1)
        {
            P = 'A';
        }
        else if (P == 'B' && M == 2)
        {
            P = 'C';
        }
        else if (P == 'C' && M == 2)
        {
            P = 'B';
        }
        else if (P == 'C' && M == 3)
        {
            P = 'A';
        }
        else if (P == 'A' && M == 3)
        {
            P = 'C';
        }
    }

    cout << P << endl;

    return 0;
}