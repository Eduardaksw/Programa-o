#include <iostream>

using namespace std;

int main()
{
    float raio;
    double perimetro, area;

    cout << "Neste programa vamos realizar a area e o perimetro de um circulo" << endl;
    cout << "Para iniciar, digite o valor do raio: " << endl;
    cin >> raio;

    area = 3.14 * (raio * raio);
    cout << "O resultado da area é: " << area << "!!" << endl;

    perimetro = 2 * 3.14 * raio;
    cout << "O resultado do perimetro é: " << perimetro << "!!" << endl;

    return 0;
}
