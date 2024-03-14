#include <iostream>

using namespace std;

int main()
{
    int A;
    int alcool = 0;
    int gasolina = 0;
    int diesel = 0;

    while (A != 4)
    {
        cin >> A;

        if (A == 1)
        {
            alcool++;
        }
        else if (A == 2)
        {
            gasolina++;
        }
        else if (A == 3)
        {
            diesel++;
        }
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;
}