#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    float altura, calcule;
    char M, F, opc;

    cout << "Vamos calcular seu peso ideal!!" << endl;
    cout << "Para iniciar digite sua altura: " << endl;
    cin >> altura;
    cout << "Agora, digite - M - se for do sexo masculino " << endl;
    cout << "Digite - F - para feminino " << endl;
    cin >> opc;

    opc = toupper (opc);

    if (opc =='M')
    {
        calcule = (72.7 * altura)- 58;
        cout << "Seu peso ideial é; " << calcule << endl;
    }
    else
    {
       calcule = (62.1 * altura)- 44.7;
       cout << "Seu peso ideial é; " << calcule << endl;
    }

    return 0;
}
