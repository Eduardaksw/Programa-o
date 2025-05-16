#include <iostream>

using namespace std;

int main()
{
    float peso, quilo, excesso, multa;

    cout << "Digite quantos quilos foi pescado: " << endl;
    cin >> quilo;

    excesso = quilo - 50;
    multa = excesso * 4;
    if( excesso <= 0)
    {
        cout << "Nao tem imposto!!!";

    }
    else
    {
        cout << "Tem excesso, entao possui multa de " << multa << "!!";

    }

    return 0;
}
