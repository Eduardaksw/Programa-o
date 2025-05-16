#include <iostream>

using namespace std;

int main()
{
    unsigned int valor;

    cout << "Para inicar este programa, digite um numero: " << endl;
    cin >> valor;

    if (valor % 2 == 0)
    {
        cout << "O numero é par" << endl;
    }
    else
    {
        cout << "O numero é impar" << endl;
    }

    return 0;
}
