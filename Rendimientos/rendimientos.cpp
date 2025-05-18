#include <iostream>
using namespace std;

int main(){

    float inversion, tasa_anual_mercado_pago, tasa_anual_dai,total;
    int opc;

    tasa_anual_mercado_pago = 0.296;
    tasa_anual_dai = 0.065;

    cout << "Este programa calcula el rendimiento mensual de una inversion\n\n";

    cout << "Seleccione donde va a calcular la inversion:\n";
    cout << "1. Mercado Pago\n";
    cout << "2. Lemon, crypto DAI\n";
    cin >> opc;

    cout << "Ingrese la cantidad de dinero a invertir: ";
    cin >> inversion;

    switch (opc)
    {
    case 1:
        total = inversion * (1 + (tasa_anual_mercado_pago / 12));
        break;

    case 2:
        total = inversion * (1 + (tasa_anual_dai / 12));
        break;
    
    default:
        return 0;
    }

    cout << "El rendimiento mensual de la inversion es: " << total << endl;

    return 0;
}