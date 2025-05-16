#include <iostream>

using namespace std;

int main()
{
    int area, dobro, lado;

    cout << "Digite o valor do lado do quadrado: " << endl;
    cin >> lado;

    area = lado * lado;
    dobro = 2 * area;

    cout << "A area é: " << area << " o dobro da area é: " << dobro << endl;

    return 0;
}
