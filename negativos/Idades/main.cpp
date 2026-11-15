#include <iostream>
#include <iomanip>
#include <climits>

using namespace std;

int main()
{
    string nome1, nome2;
    int idade1, idade2;
    double media;

    cout << "dados da primeira pessoa:" <<endl;
    cout << "nome:";
    getline(cin, nome1); //--------para ler texto ate a quebra de linha
    cout << "idade: ";
    cin >> idade1;

    cout << "dados da segunda pessoa: " <<endl;
    cout << "nome:";
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);
    cout << "idade: ";
    cin >> idade2;

    media = (idade1 + idade2) / 2.0;
    cout << fixed << setprecision(1);
    cout << "a idade media de " << nome1 << "e" << nome2
    << "eh de " << media << "anos" <<endl;

    return 0;
}
