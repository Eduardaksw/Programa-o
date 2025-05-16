#include <iostream>

using namespace std;

int main()
{
    char nome[10];
    float valorP, valorT;
    float desconto = 0.13;

    cout << "Digite o nome do produto: " << endl;
    cin >> nome;
    cout << "Digite o valor do produto: " << endl;
    cin >> valorP;

    desconto = valorP * 0.13;
    valorT = valorP - desconto;

    cout << "Produto: " << nome << endl;
    cout << "Valor: " << valorP << endl;
    cout << "Desconto: " << desconto << endl;
    cout << "Valor final: " <<  valorT << endl;


    return 0;
}
