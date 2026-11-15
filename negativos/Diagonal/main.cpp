#include <iostream>

using namespace std;

int main()
{
    int n, cont;
    cout << "Qual a orde da matriz?";
    cin >> n;

    int mat[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << "Elemento [" << i << "," << j << "]: "; // aqui é para ler as colunas e depois as linhas da matriz
            cin >> mat[i][j];
        }
    }

    cout << "DIAGONAL PRINCIPAL:" << endl;
    for (int i = 0; i < n; i++){
        cout << mat[i][i] << " ";
    } //aqui é para passar por toda matris e pegar so os numeros da diagonal principal

    cout << endl;

    cont = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
                if (mat[i][j] < 0){
                    cont++ ;
                } //essa logica é para contar quantos numeros negativos tem em uma matriz
        }
    }

    cout << "Quantidades de negativos = " << cont << endl;

    return 0;
}
