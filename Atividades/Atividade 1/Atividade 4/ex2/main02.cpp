#include <iostream>

using namespace std;

int main()
{
     char opcao;
     float num1, num2, soma, subtracao, divisao, multiplicacao;

     cout <<"Escolha entre as op��es a seguir: " << endl << endl;
     cout <<"Digite (+) para Somar!" << endl;
     cout <<"Digite (-) para Subtrair!" << endl;
     cout <<"Digite (/) para Dividir!" << endl;
     cout <<"Digite (*) para Multiplicar!" << endl;
     cout <<"Digite (S) para Sair do Programa!" << endl;

     cin >> opcao;
     opcao = toupper (opcao);

     switch (opcao)
     {
         case '+':
          cout <<"Digite o primeiro n�mero: "<< endl;
          cin >> num1;

          cout <<"Digite o segundo n�mero: "<< endl;
          cin >> num2;

          soma = num1+num2;
          cout <<"O resultado da Soma � "<< soma << endl;
        break;

        case '-':
          cout <<"Digite o primeiro n�mero: "<< endl;
          cin >> num1;

          cout <<"Digite o segundo n�mero: "<< endl;
          cin >> num2;

          subtracao = num1-num2;
          cout <<"O resultado da Subtra��o � "<< subtracao << endl;
        break;

        case '/':
          cout <<"Digite o primeiro n�mero: "<< endl;
          cin >> num1;

          cout <<"Digite o segundo n�mero: "<< endl;
          cin >> num2;

          divisao = num1/num2;
          cout <<"O resultado da Divisao � "<< divisao << endl;
        break;

       case '*':
          cout <<"Digite o primeiro n�mero: "<< endl;
          cin >> num1;

          cout <<"Digite o segundo n�mero: "<< endl;
          cin >> num2;

          multiplicacao = num1*num2;
          cout <<"O resultado da Multiplica��o � "<< multiplicacao << endl;
        break;

       case 'S':
         cout <<"Voc� saiu do programa!!" << endl;
        break;

    default:
        cout <<"Op��o Inv�lida!!!" << endl;
     }

    return 0;
}

