#include <iostream>

using namespace std;

int main()
{
    int V = 0;
    int T = 0;
    int F = 0;
    int i = 0;
    int MV = 0;

    cin >> V >> T;
    F = V;

    for (i = 0; i < T; i++)
    {
        cin >> MV;

        F = F + MV;
        if (F > 100)
        {
            F = 100;
        }
        if (F < 0) {
            F = 0;
        }
    }

    cout << F << endl;

    return 0;
}