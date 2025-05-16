#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout << "Digite o numero 1: " << endl;
    cin >> num1;
    cout << "Digite o numero 2: " << endl;
    cin >> num2;

    if (num1 > num2)
      {
        cout << "O numero maior é o " << num1;
      }
    else
      {
         cout << "O numero maior é o " << num2;
      }
    return 0;
}
