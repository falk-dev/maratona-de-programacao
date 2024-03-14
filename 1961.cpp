#include <iostream>

using namespace std;

int main()
{
    int P = 0;
    int N = 0;
    int PC = 0;
    int i = 0;
    int AA = 0;
    int S = 0;
    bool aux = false;

    cin >> P >> N;

    for (i = 0; i < N; i++)
    {
        cin >> PC;

        if (i == 0)
        {
            AA = PC;
        }

        S = abs(PC - AA);

        if (S <= P)
        {
            aux = true;
        }
        else
        {
            aux = false;
            break;
        }

        AA = PC;
    }

    if (aux == true)
    {
        cout << "YOU WIN" << endl;
    }
    else
    {
        cout << "GAME OVER" << endl;
    }
}