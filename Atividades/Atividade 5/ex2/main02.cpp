#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

    char nome [10];
    cout << "Digite seu nome: " << endl;
    cin >> nome;

    cout << "Meu nome �: " << nome << endl << endl;
    cout << "Sou do curso de Sistemas de Informa��o" << endl << endl;
    cout << "Estou no primeiro ano" << endl << endl;
    cout << "Gosto de programa��o!!!" << endl << endl;

    return 0;
}
