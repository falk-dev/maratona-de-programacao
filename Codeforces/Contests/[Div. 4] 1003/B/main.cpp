#include <bits/stdc++.h>

#define dbg(x) cout << #x << " = " << x << endl;

using namespace std;

int main() {
    int num_casos;

    cin >> num_casos;

    while (num_casos--) {
        string palavra;
        bool achou = true;

        cin >> palavra;

        while (achou) {
            achou = false;

            for (int i = 0; i < palavra.size(); i++) {
                if (i == 0 && palavra.size() > 1) {
                    if (palavra[i] == palavra[i + 1]) {
                        palavra.erase(i + 1, 1);
                        palavra[i] = palavra[i + 1];
                        achou = true;
                    }
                } else if (i >= 1 && i < palavra.size() - 1) {
                    if (palavra[i] == palavra[i + 1]) {
                        palavra.erase(i + 1, 1);
                        palavra[i] = palavra[i - 1];
                        achou = true;
                    }
                } else if (i == palavra.size() - 1 && palavra.size() > 1) {
                    if (palavra[i] == palavra[i - 1]) {
                        palavra.erase(i, 1);
                        achou = true;
                    }
                }
            }
        }
        cout << palavra.size() << endl;
    }

    return 0;
}