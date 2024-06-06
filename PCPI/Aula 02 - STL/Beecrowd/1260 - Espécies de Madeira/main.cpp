/*
Link da questão: https://judge.beecrowd.com/pt/problems/view/1260
1260 - ESPÉCIES DE MADEIRA | RESOLVIDO EM C++
Author: falk.dev
Complexidade: 
*/


#include <bits/stdc++.h>

using namespace std;

#define dbvector(vector)          \
    {                             \
        cout << #vector << " = "; \
        for (auto &it : vector)   \
            cout << it << " ";    \
        cout << endl;             \
    }

#define SPEED                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

#define dbg(x) cout << #x << " = " << x << endl;

typedef long long ll;

#define f first;
#define s second;

int main()
{
    SPEED;

    int n_casos;
	string lixo;
	
	cin >> n_casos;
	cin.ignore();
	getline(cin, lixo);
	
	while (n_casos--) {
		string especie;
		map<string, int> arvores;
		map<string, double> proporcao;
		double calculo, qtd = 0;
		
		while(getline(cin, especie)) {
			if (!especie.empty()) {
				arvores[especie]++;
			}
			else break;
		}
		
		for (auto i : arvores) {
			qtd += i.second;
		}
		
		cout << fixed << setprecision(4);
		
		for (auto i : arvores) {
			calculo = (i.second / qtd) * 100;
			
			proporcao[i.first] = calculo;
		}
		
		for (auto i : proporcao){
			cout << i.first << " " << i.second << endl;
		}
        if (n_casos >= 1) cout << endl;
	}

    return 0;
}