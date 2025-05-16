#include <iostream>

using namespace std;

int main()
{
    int ganha, horas, total;

    cout << "Digite o valor que vc ganha por hora: " << endl;
    cin >> ganha;
    cout << "Digite o numero de horas trabalhadas no mes: " << endl;
    cin >> horas;

    total = ganha * horas;

    cout << "O salario total é: " << total << "!!" << endl;
    return 0;
}
