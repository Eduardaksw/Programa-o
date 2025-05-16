#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

    string nome, hobby;
    int idade, comida, cidade, escolha;
    char cor[10];
    char resposta;

    cout << "Ol�, vamos conversar? N�o tenho muito o que fazer..." << endl;

    cout << "Qual � o seu nome? ";
    getline(cin, nome);
    cout << "Ah, que nome mais comum, " << nome << ". Acho que eu j� vi um monte de gente com esse nome." << endl;


    cout << "\nQuantos anos voc� tem? ";
    cin >> idade;
    if (idade < 18) {
        cout << "Voc� � muito jovem para estar aqui. Vai estudar!" << endl;
    } else {
        cout << "Nossa, voc� j� passou dos 18, mas ainda n�o � adulto de verdade." << endl;
    }

    cout << "\nQual � a sua cor favorita? ";
    cin >> cor;
    cout << "Que cor brega... s�rio, " << cor << endl;

    for (int i = 1; i <= 5; i++)
    {
        cout << "\nTentativa " << i << ": Qual � o resultado de EU + EU" << endl;
        cin >> resposta;
        cout << "Tente novamente" << endl;

    }
    cout << "Vish acabou :/" << endl;
    cout << "\nQual dessas comidas voc� mais gosta? Escolha o n�mero:\n";
    cout << "1 - Pizza\n2 - Hamb�rguer\n3 - Sushi\n4 - Feijoada\n";
    cin >> comida;
    switch (comida) {
        case 1:
            cout << "Pizza, s�rio? Que coisa mais sem gra�a." << endl;
            break;
        case 2:
            cout << "Hamb�rguer? Isso � t�o anos 2000." << endl;
            break;
        case 3:
            cout << "Sushi? Voc� deve ser muito fresco!" << endl;
            break;
        case 4:
            cout << "Feijoada? O cl�ssico... Mas eu prefiro um prato mais interessante." << endl;
            break;
        default:
            cout << "Voc� n�o sabe escolher comida. Que frustrante." << endl;
    }

    cout << "\nDe qual cidade voc� �? Digite o n�mero:\n1 - S�o Paulo\n2 - Rio de Janeiro\n3 - Salvador\n4 - Outro\n";
    cin >> cidade;
    if (cidade == 1) {
        cout << "Ah, S�o Paulo... todo mundo l� � apressado demais." << endl;
    } else if (cidade == 2) {
        cout << "Rio de Janeiro, eh? Todo mundo acha que � festa, mas � s� calor e tr�nsito." << endl;
    } else if (cidade == 3) {
        cout << "Salvador... j� conhe�o todos os clich�s." << endl;
    } else {
        cout << "Cidades fora do eixo, mas tudo bem, deve ser chato viver a�." << endl;
    }

    cout << "\nVoc� gosta de assistir filmes? (s - sim / n - n�o): ";
    cin >> resposta;
    if (resposta == 's' || resposta == 'S') {
        cout << "Voc� deve ser um expert em filmes... ou n�o." << endl;
    } else {
        cout << "N�o gosta de filmes? Ent�o o que voc� faz da vida?" << endl;
    }

    cout << "\nO que voc� faz nas f�rias? Escolha o n�mero:\n1 - Viajo\n2 - Fico em casa\n3 - Trabalho\n";
    cin >> escolha;
    switch (escolha) {
        case 1:
            cout << "Viajar? Como se a gente tivesse tempo ou dinheiro pra isso." << endl;
            break;
        case 2:
            cout << "Ficar em casa? Voc� � daqueles que n�o sabe aproveitar a vida!" << endl;
            break;
        case 3:
            cout << "Trabalhar nas f�rias? Que vida mais sem gra�a!" << endl;
            break;
        default:
            cout << "Que tipo de escolha foi essa? Ningu�m vai pra lugar nenhum..." << endl;
    }

    cout << "Enfim, acho que j� te fiz perguntas demais. J� cansei de conversar... Tchau" << endl;
    return 0;
}
