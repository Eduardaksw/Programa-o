#include <iostream>

using namespace std;

int main()
{
    int contador = 50;

    while ( contador >= 10)
    {
        cout << "Os numeros contidos são: " << contador << endl;
        contador = contador - 1;
    }
    cout << "Acabou!!!" << endl;
    return 0;
}
