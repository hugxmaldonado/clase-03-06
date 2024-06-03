#include <iostream>
using namespace std;

int suma(int x, int y)
{
    return x+y;
}

int resta(int x, int y)
{
    return x-y;
}

int multiplicacion(int x, int y)
{
    return x*y;
}

int division(int x, int y)
{
    return x/y;
}

int main ()
{
    int a, b, opc;

    cout << "Ingrese numero entero a: ";
    cin >> a;

    cout << "Ingrese numero entero b: ";
    cin >> b;
    
    cout << "Elije que opcion desea: \n\t1. Sumar\n\t2. Restar\n\t3. Multiplicacion\n\t4. Division\n\tOtro numero: salir\n";
    cout << "Su opcion es: ";
    cin >> opc;

    switch (opc) {
        case 1:
        cout << "el resultado es :" << suma (a,b);
        break;

    case 2:
    cout << "el resultado es :" << resta (a,b);
    break;
    default:
    cout << "salir";
    break;

    case 3:
    cout << "el resultado es :" << multiplicacion (a,b);
    break;
    cout << "salir";
    break;

    case 4:
    cout << "el resultado es :" << division (a,b);
    break;
    cout << "salir";
    break;

}
 return 0;
 }