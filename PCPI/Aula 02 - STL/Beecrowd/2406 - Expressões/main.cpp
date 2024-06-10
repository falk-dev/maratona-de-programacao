/*
Link da questão: https://judge.beecrowd.com/pt/problems/view/2406
2406 - EXPRESSÕES | RESOLVIDO EM C++
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

    cin >> n_casos;

    while (n_casos--)
    {
        bool aux = true;
        string expression;
        stack<char> symbols;

        cin >> expression;

        for (int i = 0; i < expression.size(); i++) {
            if (expression[i] == '{' || expression[i] == '[' || expression[i] == '(') {
                symbols.push(expression[i]);
            }
            else if (!symbols.empty()) 
            {
                if (expression[i] == '}') 
                {
                    if (symbols.top() == '{')
                    {
                        symbols.pop();
                    }
                    else {
                        aux = false;
                        break;
                    }
                }
                else if (expression[i] == ']') 
                {
                    if (symbols.top() == '[')
                    {
                        symbols.pop();
                    }
                    else {
                        aux = false;
                        break;
                    }
                }
                else if (expression[i] == ')') 
                {
                    if (symbols.top() == '(')
                    {
                        symbols.pop();
                    }
                    else {
                        aux = false;
                        break;
                    }
                }
            }
            else {
                aux = false;
                break;
            }
        }

        if (symbols.size() >= 1) aux = false;
        
        if (aux == true) { 
            cout << "S" << endl;
        }
        else {
            cout << "N" << endl;
        }
    }
    

    return 0;
}