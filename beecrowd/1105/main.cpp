// 1105 - SUB-PRIME | RESOLVIDO EM C++

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int B = 1;
    int N = 1;
    int D = 0;
    int C = 0;
    int V = 0;
    int i = 0;
    bool aux = false;
    vector<int> R;

    while (cin >> B >> N, B)
    {
        R.resize(B + 1);

        for (i = 1; i < R.size(); i++)
        {
            cin >> R[i];
        }

        for (i = 1; i < N + 1; i++)
        {
            cin >> D >> C >> V;

            R[D] = R[D] - V;
            R[C] = R[C] + V;
        }

        for (i = 1; i < R.size(); i++)
        {
            if (R[i] >= 0)
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
            cout << "S" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }

    return 0;
}