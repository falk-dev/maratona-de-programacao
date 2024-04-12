// 1471 - MERGULHO | RESOLVIDO EM C++

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;
    int R = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int aux = 0;

    while (cin >> N >> R)
    {
        vector<int> X(N + 1);

        for (j = 1; j <= R; j++)
        {
            cin >> aux;

            X[aux] = 1;
        }

        if (N == R)
        {
            cout << "*";
        }
        else
        {
            for (k = 1; k < X.size(); k++)
            {
                if (X[k] == 0)
                {
                    cout << k << " ";
                }
            }
        }

        cout << endl;
        i++;
    }

    return 0;
}