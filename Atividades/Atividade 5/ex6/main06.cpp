#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

    signed int valor;

    cout << "Neste promaga, vamos observar se os valores s�o positivos ou negativos ou zero!!" << endl;
    cout << "Para isso, digite um numero qualquer: " << endl;
    cin >> valor;

    if (valor == 0)
    {
        cout << "O valor � zero!!" << endl;
    }
    else if (valor > 0)
    {
       cout << "O valor � positivo!!" << endl;
    }
    else
    {
       cout << "O valor � negativo!!" << endl;
    }

    return 0;
}
