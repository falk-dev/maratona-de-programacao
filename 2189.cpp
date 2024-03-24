#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 1;
    int i = 1;
    int j = 0;
    int aux = 0;

    while (cin >> N, N)
    {
        vector<int> ingressos(N + 1);

        for (j = 1; j <= N; j++)
        {
            cin >> ingressos[j];

            if (j == ingressos[j])
            {
                aux = ingressos[j];
            }
        }

        cout << "Teste " << i << endl;
        cout << aux << endl;
        cout << endl;

        i++;
    }
}