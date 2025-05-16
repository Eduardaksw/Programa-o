#include <iostream>

using namespace std;

int main()
{
    int nota1, nota2, media;

    cout << "Digite a nota 1: " << endl;
    cin >> nota1;
    cout << "Digite a nota 2: " << endl;
    cin >> nota2;

    media = (nota1 + nota2)/ 2;

    if (media == 10 )
    {
        cout << "Aprovado com distinção" << endl;;
    }

    else if(media >= 7)
    {
        cout << "Aprovado" << endl;;
    }
    else
    {
        cout << "Reprovado";
    }
    return 0;
}
