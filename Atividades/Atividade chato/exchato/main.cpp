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

    cout << "Olá, vamos conversar? Não tenho muito o que fazer..." << endl;

    cout << "Qual é o seu nome? ";
    getline(cin, nome);
    cout << "Ah, que nome mais comum, " << nome << ". Acho que eu já vi um monte de gente com esse nome." << endl;


    cout << "\nQuantos anos você tem? ";
    cin >> idade;
    if (idade < 18) {
        cout << "Você é muito jovem para estar aqui. Vai estudar!" << endl;
    } else {
        cout << "Nossa, você já passou dos 18, mas ainda não é adulto de verdade." << endl;
    }

    cout << "\nQual é a sua cor favorita? ";
    cin >> cor;
    cout << "Que cor brega... sério, " << cor << endl;

    for (int i = 1; i <= 5; i++)
    {
        cout << "\nTentativa " << i << ": Qual é o resultado de EU + EU" << endl;
        cin >> resposta;
        cout << "Tente novamente" << endl;

    }
    cout << "Vish acabou :/" << endl;
    cout << "\nQual dessas comidas você mais gosta? Escolha o número:\n";
    cout << "1 - Pizza\n2 - Hambúrguer\n3 - Sushi\n4 - Feijoada\n";
    cin >> comida;
    switch (comida) {
        case 1:
            cout << "Pizza, sério? Que coisa mais sem graça." << endl;
            break;
        case 2:
            cout << "Hambúrguer? Isso é tão anos 2000." << endl;
            break;
        case 3:
            cout << "Sushi? Você deve ser muito fresco!" << endl;
            break;
        case 4:
            cout << "Feijoada? O clássico... Mas eu prefiro um prato mais interessante." << endl;
            break;
        default:
            cout << "Você não sabe escolher comida. Que frustrante." << endl;
    }

    cout << "\nDe qual cidade você é? Digite o número:\n1 - São Paulo\n2 - Rio de Janeiro\n3 - Salvador\n4 - Outro\n";
    cin >> cidade;
    if (cidade == 1) {
        cout << "Ah, São Paulo... todo mundo lá é apressado demais." << endl;
    } else if (cidade == 2) {
        cout << "Rio de Janeiro, eh? Todo mundo acha que é festa, mas é só calor e trânsito." << endl;
    } else if (cidade == 3) {
        cout << "Salvador... já conheço todos os clichés." << endl;
    } else {
        cout << "Cidades fora do eixo, mas tudo bem, deve ser chato viver aí." << endl;
    }

    cout << "\nVocê gosta de assistir filmes? (s - sim / n - não): ";
    cin >> resposta;
    if (resposta == 's' || resposta == 'S') {
        cout << "Você deve ser um expert em filmes... ou não." << endl;
    } else {
        cout << "Não gosta de filmes? Então o que você faz da vida?" << endl;
    }

    cout << "\nO que você faz nas férias? Escolha o número:\n1 - Viajo\n2 - Fico em casa\n3 - Trabalho\n";
    cin >> escolha;
    switch (escolha) {
        case 1:
            cout << "Viajar? Como se a gente tivesse tempo ou dinheiro pra isso." << endl;
            break;
        case 2:
            cout << "Ficar em casa? Você é daqueles que não sabe aproveitar a vida!" << endl;
            break;
        case 3:
            cout << "Trabalhar nas férias? Que vida mais sem graça!" << endl;
            break;
        default:
            cout << "Que tipo de escolha foi essa? Ninguém vai pra lugar nenhum..." << endl;
    }

    cout << "Enfim, acho que já te fiz perguntas demais. Já cansei de conversar... Tchau" << endl;
    return 0;
}
