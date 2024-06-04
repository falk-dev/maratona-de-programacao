// 1008 - SALÁRIO || RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main() {
    int num_funcionario, horas_trabalhadas;
    double recebe_hora, salario;

    cin >> num_funcionario;
    cin >> horas_trabalhadas;
    cin >> recebe_hora;

    salario = horas_trabalhadas * recebe_hora;

    cout << "NUMBER = " << num_funcionario << endl;
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << salario << endl;

    return 0;
}