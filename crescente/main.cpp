#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "Digite dois numeros:" << endl;
    cin >> x >> y; // aqui o operador le os dois de uma vez

    while(x != y) {
        if (x < y) {
            cout << "crescente!" << endl;
        }
        else {
            cout << "decrescente!" << endl;
        }
        cout << "digite outros dois numeros:" << endl;
        cin >> x >> y;
    }

    return 0;
}
