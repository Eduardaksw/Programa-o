#include <iostream>

using namespace std;

int main()
{
    double salarioBruto, imposto, salarioLiquido;

    cout << "Digite o valor do seu salario bruto: " << endl;
    cin >> salarioBruto;

    imposto = salarioBruto * 0.07;
    salarioLiquido = salarioBruto - imposto;

    cout << "O salario bruto �: " << salarioBruto << endl;
    cout << "O imposto de renda �: " << imposto << endl;
    cout << "O salario liquido �: " << salarioLiquido << endl;

    return 0;
}
