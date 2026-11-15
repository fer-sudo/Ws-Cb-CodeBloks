#include <iostream>

using namespace std;

int main()
{   int a, b, c, menor;

    cout << "primeiro valor: ";
    cin >> a;
    cout << "segundo valor: ";
    cin >> b;
    cout << "terceiro valor: ";
    cin >> c;

    if (a < b) && (a < c) {
        menor = a;
    }
        else if (b < c) {
           menor = b;
        }
            else {
                menor = c;
            }

    cout << ("menor = ", menor) <<endl;


    return 0;
}
