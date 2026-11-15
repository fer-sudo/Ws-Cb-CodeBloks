#include <iostream>
#include <cmath> // serve para questoes matematicas
#include <iomanip> // serve para setprecision

using namespace std;

int main()

{   double base, altura, area, perimetro, diagonal;

    cout << "base do retangulo:";
    cin >> base;
    cout << "altura do retangulo:";
    cin >> altura;

        area = base * base;
        perimetro = 2 * (base + altura);
        diagonal = sqrt(base * base + altura * altura); //pode ser tbem sqrt(pow(base, 2.0) + pow(altura, 2.0); ou sqrt (pow(base * base) + pow(altura * altura);

        cout << fixed << setprecision(4);
        cout << "valor da areea=" << area << endl;
        cout << "valor do perimetro=" << perimetro << endl;
        cout << "valor da diagonal=" << diagonal << endl;

    return 0;
}


