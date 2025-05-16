#include <iostream>

using namespace std;

int main()
{
    float nota1, nota2, nota3, nota4, media;

    cout << "Digite a nota 1: " << endl;
    cin >> nota1;
    cout << "Digite a nota 2: " << endl;
    cin >> nota2;
    cout << "Digite a nota 3: " << endl;
    cin >> nota3;
    cout << "Digite a nota 4: " << endl;
    cin >> nota4;

    media = (nota1 + nota2 + nota3 + nota4)/4;

    cout << "Sua media é de: " << media << "!!" << endl;


    return 0;
}
