#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, maior;

    cout << "Digite o  numero 1: " << endl;
    cin >> num1;
    cout << "Digite o  numero 2: " << endl;
    cin >> num2;
    cout << "Digite o  numero 3: " << endl;
    cin >> num3;

    if ((num1 >= num2) && (num1 >= num3))
    {
        maior = num1;
        cout << "O numero maior é: " << num1 << endl;
    }
    else if ((num2 >= num1) && (num2 >= num3))
    {
        maior = num2;
        cout << "O numero maior é: " << num2 << endl;
    }
    else if ((num3 >= num1) && (num3 >= num2))
    {
        maior = num3;
        cout << "O numero maior é: " << num3 << endl;
    }


    return 0;
}
