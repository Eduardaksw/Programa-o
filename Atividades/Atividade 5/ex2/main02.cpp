#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

    char nome [10];
    cout << "Digite seu nome: " << endl;
    cin >> nome;

    cout << "Meu nome é: " << nome << endl << endl;
    cout << "Sou do curso de Sistemas de Informação" << endl << endl;
    cout << "Estou no primeiro ano" << endl << endl;
    cout << "Gosto de programação!!!" << endl << endl;

    return 0;
}
