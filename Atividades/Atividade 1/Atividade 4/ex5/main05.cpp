#include <iostream>

using namespace std;

int main()
{
    int n,m, menor, maior, total;

    cout << "Digite um numero: " << endl;
    cin >> n;
    cout << "Digite outro numero: " << endl;
    cin >> m;

    if (n < m)
        {
          menor = n;
          maior = m;

        }
    else
        {
          menor = m;
          maior = n;
        }

    cout << "Números no intervalo de " << menor << " a " << maior << endl;

    while (menor <= maior)
    {
        cout << menor << " ";
        menor = menor + 1;
    }


    return 0;
}
