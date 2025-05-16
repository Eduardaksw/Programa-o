#include <iostream>

using namespace std;

int main()
{
    float area, lata1,  valor1;

    cout << "Digite o valor da area a ser pintada " << endl;
    cin >> area;

    lata1 = area/54;
    cout << "Para cobrir uma area de " << area << "m^2, serão necessarios " << lata1 << "latas de tinta" << endl;

    valor1 = area * 80;
    cout << "O valor total a ser gasto com " << lata1 << "latas de tinta corresponde a " << valor1 << "R$";

    return 0;
}
