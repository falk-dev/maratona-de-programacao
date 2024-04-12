// 2162 - PICOS E VALES | RESOLVIDO EM C++

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;
    int i = 0;
    bool aux = false;

    cin >> N;

    vector<int> X(N);

    for (i = 0; i < N; i++)
    {
        cin >> X[i];
    }

    if (N == 1)
    {
        cout << "1" << endl;
    }

    else if (N == 2)
    {
        if (X[0] == X[1])
        {
            cout << "0" << endl;
        }
        else
        {
            cout << "1" << endl;
        }
    }

    else
    {
        for (i = 1; i < N - 1; i++)
        {
            if ((X[i] > X[i - 1] && X[i] > X[i + 1]) || (X[i] < X[i - 1] && X[i] < X[i + 1]))
            {
                aux = true;
                continue;
            }
            else
            {
                aux = false;
                break;
            }
        }
        if (aux == true)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }

    return 0;
}