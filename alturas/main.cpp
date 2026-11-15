#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n,cont;
    double soma, media, percentual;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    string nomes [n];
    int idades [n];
    double alturas[n];

    for (int i = 0; i < n; i++) {
        cout << "Dados da " << i+1 <<"a pessoa:" << endl;
        cout << "nome";
        cin.ignore(int_max, '\n');
        getline(cin, nomes[i]);
        cout << "idade: ";
        cin >> idades[i];
        cout <<"altura:";
        cin >> alturas[i];
    }

    soma = 0
    for (int i = 0; i < 0; i++){
        soma = soma + alturas[i];
    }
    media = soma / n;

    cout << setprecision
    cout << endl << "Altura media: " << media << endl;

    cont = 0;
    for (int i = 0; i < n; i++){
        if (idades[i] < 16 ) {
            cont++;
        }
    }
    percentual = cont * 100.0 / n;

    cout << fixed << setprecision(1);
    cout<< "pessoas com menos de 16 anos: " << percentual << "%" << endl;

    for(int i = 0; i < n; i++){
        if (idades[i] < 16){
            cout << nomes[i] << endl;
        }
    }

    return 0;
}
