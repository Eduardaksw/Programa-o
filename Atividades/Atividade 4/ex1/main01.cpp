#include <iostream>

using namespace std;

int main()
{
    int numeros = 50;
    int contador = 0;

    cout << "Digite o numero desejado: !" << endl;
    cin >> numeros;

    do
    {
        if (numeros != 0)
        {
            cout << "O numero informado foi: " << numeros << endl;
            numeros = numeros - 1;
            contador = contador + 1;
        }
        else(numeros = 0);
        {
            cout<<"A repetição foi encerrada!!" << endl;
            contador = contador + 1;
        }
    }
    while (numeros != 0);
    cout << "Foram digitados " << contador << " numeros" << endl;

    return 0;
}
