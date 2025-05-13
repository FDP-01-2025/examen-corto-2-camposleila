#include <iostream>
using namespace std;

int main()
{
    int Talla, edad;
    char Opciong, Opcionh, Opcionm;
    double Saldo, d, f, p, c, e, pr;

    cout << "Bienvenido al sistema de compra de zapatos" << endl;
    cout << "Ingrese su edad" << endl;

    cin >> edad;
    if (edad >= 0 && edad <= 12)
    {
        cout << "Talla recomendada: 34" << endl;
    }
    else if (edad >= 13 && edad <= 17)
    {
        cout << "Talla recomendada: 38" << endl;
    }
    else if (edad >= 18 && edad <= 64)
    {
        cout << "Talla recomendada: 40" << endl;
    }
    else if (edad >= 65)
    {
        cout << "Talla recomendada: 42" << endl;
    }

    cout << "Selecciona zapatos para:" << endl;
    cout << "1. Hombre" << endl;
    cout << "2. Mujer" << endl;
    cout << "3. Mostrar todo" << endl;

    cin >> Opciong;

    switch (Opciong)
    {
    case 1:
        cout << "Zapatos disponibles para hombre" << endl;
        switch (Opcionh)
        {
            cout << "1. Zapato Deportivo: $80 (descuento del 20%, precio con descuento $" << d << ")." << endl;
            d = 64.00;
            cout << "2. Zapato Formal: $120 (descuento del 20%, precio con descuento $" << f << ")." << endl;
            f = 96.00;
            cout << "3. Zapato Premium: $250 (descuento del 20%, precio con descuento $" << p << ")." << endl;
            p = 200.00;

            cin >> Opcionh; 
            case 1:
            

            break;  

            case 2:

            break;  

            case 3: 

            break; 

            default: 
            cout <<"Seleccione una opcion valida" << endl; 

        }
        break;

    case 2:
        cout << "Zapatos disponibles para mujer" << endl;
        cout << "Zapato Casual: $" << c << "(descuento del 15%, precio con descuento)" << endl;
        c = 70.00;
        cout << "Zapato Elegante: $" << e << "(descuento del 15%, precio con descuento)" << endl;
        e = 100.00;
        cout << "Zapato Premium: $" << pr << "(descuento del 15%, precio con descuento)" << endl;
        pr = 250.00;
        break;

    case 3:
        cout << "Zapatos disponibles para hombre" << endl;
        cout << "Zapato Deportivo: $80 (descuento del 20%, precio con descuento $" << d << ")." << endl;
        d = 64.00;
        cout << "Zapato Formal: $120 (descuento del 20%, precio con descuento $" << f << ")." << endl;
        f = 96.00;
        cout << "Zapato Premium: $250 (descuento del 20%, precio con descuento $" << p << ")." << endl;
        p = 200.00;
        cout << "Zapatos disponibles para mujer" << endl;
        cout << "Zapato Casual: $" << c << "(descuento del 15%, precio con descuento)" << endl;
        c = 70.00;
        cout << "Zapato Elegante: $" << e << "(descuento del 15%, precio con descuento)" << endl;
        e = 100.00;
        cout << "Zapato Premium: $" << pr << "(descuento del 15%, precio con descuento)" << endl;
        pr = 250.00;
        break;

    default:
        cout << "Opcion no valida" << endl;
    }

    return 0;
}