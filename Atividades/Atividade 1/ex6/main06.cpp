#include <iostream>

using namespace std;

int main()
{
    float raio, area;

    cout << "Digite o valor do raio do circulo: " << endl;
    cin >> raio;

    area = 3.14 * (raio * raio);

    cout << "A area do circulo �: " << area << "!!" << endl;
    return 0;
}
