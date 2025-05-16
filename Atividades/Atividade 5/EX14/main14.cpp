#include <iostream>

using namespace std;

int main()
{
    int habitantes, i, filhos;
    float mediaS, mediaF;
    float maiorSalario = 0, salario, soma = 0 , quant = 0;

    for (i = 1; i <=15; i++ )
    {
        cout << "Habitante " << i << endl;

        cout << "Salario: " << i << endl;
        cin >> salario;
        soma += salario;

        if (salario > maiorSalario)
        {
            maiorSalario = salario;
        }

        cout << "Numero de filhos:" << i << endl;
        cin >> filhos;
        quant += filhos;

    }

    mediaS = soma /15;
    cout << "A media salarial é: " << mediaS << endl;

    mediaF = quant /15;
    cout << "A media do numero de filhos é: " << mediaF << endl;
    cout << "Maior salario informado: R$ " << maiorSalario << endl;

    return 0;
}
