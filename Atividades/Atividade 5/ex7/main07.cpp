#include <iostream>

using namespace std;

int main()
{
    int opc, quantidade;
    float  preco, total;

    cout << "Escolha uma opcao do cardapio: " << endl;
    cout << "Digite - 100 - para escolher CACHORRO QUENTE" << endl;
    cout << "Digite - 101 - para escolher BAURU SIMPLES" << endl;
    cout << "Digite - 102 - para escolher BAURU COM OVO" << endl;
    cout << "Digite - 103 - para escolher HAMBURGUER" << endl;
    cout << "Digite - 104 - para escolher CHEESEBURGUER" << endl;
    cout << "Digite - 105 - para escolher REFRIGERANTE LATA" << endl;
    cout << "Digite - 106 - para escolher AGUA" << endl;
    cin >> opc;

    cout << "Digite a quantidade desejada: ";
    cin >> quantidade;

    switch (opc)
    {
    case 100: preco = 9.20;
        cout << "O cachorro quente custa: 9.20" << endl;
    break;
    case 101: preco = 12.00;
        cout << "O bauru simples custa: 12.00 " << endl;
    break;
    case 102: preco = 13.00;
        cout << "O bauru com ovo custa: 13.00 " << endl;
    break;
    case 103: preco = 10.00;
        cout << "O hamburguer custa: 10.00 " << endl;
    break;
    case 104: preco = 12.00;
        cout << "O cheesebruguer custa: 12.00 " << endl;
    break;
    case 105: preco = 5.00;
        cout << "O refrigerante lata custa: 5.00 " << endl;
    break;
    case 106: preco = 3.00;
        cout << "A agua custa: 3.00" << endl;
    break;
    default:
        cout << "Invalido" << endl;
    break;
    }

    total = preco * quantidade;
    cout << "O valor a ser pago é: " << total << "reais" << endl;

    return 0;
}
