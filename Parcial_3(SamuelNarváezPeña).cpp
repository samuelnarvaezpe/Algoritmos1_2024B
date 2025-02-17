#include <iostream>
using namespace std;
int main() {
    
    char adultoprinci[50]; //char es una funcion para leer caracteres, y el [50] es para especificar el numero de caracteres
    int cpersonas=0, cninos1015=0, cninosmenor10=0;
    int dia=0, afiliado=0;
    int costoPorPersona, costoBase, descuentoninos1015, descuentoninosmenor10, descuentoAfiliado, totalAPagar;

    cout << "Ingrese el nombre del adulto principal (sin espacios): ";
    cin >> adultoprinci;

    while (cpersonas <= 0) {
        cout << "Ingrese la cantidad de personas en el grupo: ";
        cin >> cpersonas;

        if (cpersonas <= 0) {
            cout << "ERROR. La cantidad de personas debe ser mayor que 0.\n";
        }
    }

 do {
        cout << "Ingrese la cantidad de niños entre 10 y 15 años: ";
        cin >> cninos1015;
        cout << "Ingrese la cantidad de niños menores de 10 años: ";
        cin >> cninosmenor10;

        if (cninos1015 + cninosmenor10 > cpersonas) {
            cout << "ERROR. La cantidad de niños no puede ser mayor que la cantidad total de personas.\n";
        }
        if (cninos1015 < 0 || cninosmenor10 < 0) {
            cout << "ERROR. La cantidad de niños no puede ser negativa.\n";
        }
    } while (cninos1015 + cninosmenor10 > cpersonas || cninos1015 < 0 || cninosmenor10 < 0);

    while (afiliado != 1 && afiliado != 2) {
        cout << "¿" <<adultoprinci <<" es afiliado? (1: Sí, 2: No): ";
        cin >> afiliado;

        if (afiliado != 1 && afiliado != 2) {
            cout << "ERROR. Seleccione una opción válida (1 o 2).\n";
        }
    }

    while (dia != 1 && dia != 2) {
        cout << "¿El ingreso es fin de semana? (1: Sí, 2: No): ";
        cin >> dia;

        if (dia != 1 && dia != 2) {
            cout << "ERROR. Seleccione una opción válida (1 o 2).\n";
        }
    }

    if (dia == 1) {
        costoPorPersona = 9500; // Fin de semana
    } else {
        costoPorPersona = 6500; // Entre semana
    }

    costoBase = cpersonas * costoPorPersona;
    descuentoninos1015 = cninos1015 * costoPorPersona * 0.10; // 10% de descuento por niño de 10-15 años
    descuentoninosmenor10 = cninosmenor10 * costoPorPersona * 0.20; // 20% de descuento por niño menor de 10 años

    if (afiliado == 1) {
        descuentoAfiliado = (costoBase - descuentoninos1015 - descuentoninosmenor10) * 0.15; // 15% de descuento por afiliación
    } else {
        descuentoAfiliado = 0;
    }

    totalAPagar = costoBase - descuentoninos1015 - descuentoninosmenor10 - descuentoAfiliado;

    cout << "\n----- Resumen de la Entrada -----\n";
    cout << "Nombre del adulto principal: " << adultoprinci << endl;
    cout << "Cantidad total de personas: " << cpersonas << endl;
    cout << "Cantidad de niños entre 10 y 15 años: " << cninos1015 << endl;
    cout << "Cantidad de niños menores de 10 años: " << cninosmenor10 << endl;
    cout << "Día: " << (dia == 1 ? "Fin de semana" : "Entre semana") << endl;
    cout << "Afiliación: " << (afiliado == 1 ? "Afiliado" : "No afiliado") << endl;
    cout << "Valor total a pagar: $" << totalAPagar << endl;

    return 0;
}
