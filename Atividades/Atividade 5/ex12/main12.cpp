#include <iostream>

using namespace std;

int main()
{
    unsigned int valor;
    int i;
    float media, soma;

    cout << "Digite 20 valores inteiros positivos: " << endl;

    for (i = 1; i <= 20; i++ )
    {
        cout << "Numero: " << i << ":" << endl;
        cin >> valor;
        soma += valor;
    }
    media = soma / 20;
    cout << "A media vale: " << media << endl;

    return 0;
}
