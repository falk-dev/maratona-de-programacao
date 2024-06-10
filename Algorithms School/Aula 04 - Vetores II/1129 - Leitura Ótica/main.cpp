// 1129 - LEITURA ÓTICA | RESOLVIDO EM C++

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 1;
    int i = 0;
    int j = 0;
    int aux = 0;
    vector<int> X(6);

    while (cin >> N, N)
    {
        for (i = 1; i <= N; i++)
        {
            for (j = 1; j < X.size(); j++)
            {
                cin >> X[j];

                if (X[j] <= 127)
                {
                    aux++;
                }
            }

            if (aux >= 2 || aux == 0)
            {
                cout << "*" << endl;
            }
            else
            {
                for (j = 1; j <= X.size(); j++)
                {
                    if (X[j] <= 127)
                    {
                        if (j == 1) {
                            cout << "A" << endl;
                        }
                        if (j == 2) {
                            cout << "B" << endl;
                        }
                        if (j == 3) {
                            cout << "C" << endl;
                        }
                        if (j == 4) {
                            cout << "D" << endl;
                        }
                        if (j == 5) {
                            cout << "E" << endl;
                        }
                    }
                }
            }

            aux = 0;
        }
    }

    return 0;
}