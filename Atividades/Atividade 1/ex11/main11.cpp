#include <iostream>

using namespace std;

int main()
{
    double salarioBruto, imposto, salarioLiquido;

    cout << "Digite o valor do seu salario bruto: " << endl;
    cin >> salarioBruto;

    imposto = salarioBruto * 0.07;
    salarioLiquido = salarioBruto - imposto;

    cout << "O salario bruto é: " << salarioBruto << endl;
    cout << "O imposto de renda é: " << imposto << endl;
    cout << "O salario liquido é: " << salarioLiquido << endl;

    return 0;
}
