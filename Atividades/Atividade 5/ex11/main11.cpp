#include <iostream>

using namespace std;

int main()
{
    signed int num;
    int i, positivo = 0, negativo = 0;

    cout << "Digite 15 numeros - um de cada vez: " << endl;

    for ( i = 1; i <= 15; i++)
    {
    cout << "Numero: " << i << ":" << endl;
    cin >> num;

    if (num > 0)
    {
        positivo++;
    }
    else
    {
        negativo++;
    }
    }

    cout << "Quantidade de valores negativos: " << negativo << endl;
    cout << "Quantidade de valores positivos: " << positivo << endl;


    return 0;
}
