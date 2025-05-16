#include <iostream>

using namespace std;

int main()
{
    unsigned int valor;
    int i, numPar = 0;
    float media, soma = 0;

    cout << "Digite 20 valores inteiros positivos: " << endl;

    for (i = 1; i <= 20; i++ )
    {
        cout << "Numero: " << i << ":" << endl;
        cin >> valor;

        if (valor % 2 == 0)
        {
            soma += valor;
            numPar++;
        }
    }
    if (numPar > 0)
    {
        media = soma / numPar;
        cout << "A media dos numeros pares é: " << media << endl;
    }
    else
    {
        cout << "Nao possui numeros pares para realizar a media." << endl;
    }


    return 0;
}
