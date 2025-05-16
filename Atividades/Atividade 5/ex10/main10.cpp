#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int nota1, nota2, nota3, matricula;
    float media;
    const int max = 10;
    char conceito;

    cout << "Este programa verifica sua aprovação ou reprovação" << endl;
    cout << "Para inicar, digite o número da matricula: " << endl;
    cin >> matricula;
    cout << "Digite a nota 1: " << endl;
    cin >> nota1;
    cout << "Digite a nota 2: " << endl;
    cin >> nota2;
    cout << "Digite a nota 3: " << endl;
    cin >> nota3;

    media = (nota1 + nota2*2 + nota3*3)/ 6;

    if (media >= 9.0)
    {
       conceito = 'A';
    }
    else if (media >= 7.5)
    {
        conceito = 'B';
    }
    else if (media >= 6.0)
    {
        conceito = 'C';
    }
    else if (media >= 4.0)
    {
        conceito = 'D';
    }
    else
    {
        conceito = 'E';
    }

    cout << "Matrícula: " << matricula << endl;
    cout << "Notas: " << nota1 << ", " << nota2 << ", " << nota3 << endl;
    cout << "Média: " << media << endl;
    cout << "Conceito: " << conceito << endl;


    if (conceito == 'A' || conceito == 'B' || conceito == 'C')
    {
        cout << "Situação: APROVADO" << endl;
    }
    else
    {
        cout << "Situação: REPROVADO" << endl;
    }

    return 0;
}
