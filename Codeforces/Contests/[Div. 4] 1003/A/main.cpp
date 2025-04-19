#include <bits/stdc++.h>

using namespace std;

int main() {
    int num_casos;

    cin >> num_casos;

    for (int i = 0; i < num_casos; i++) {
        string palavra, palavra_nova = "";

        cin >> palavra;

        for (int j = 0; j < palavra.size() - 2; j++) {
            palavra_nova += palavra[j];
        }

        palavra_nova += "i";

        cout << palavra_nova << endl;
    }

    return 0;
}