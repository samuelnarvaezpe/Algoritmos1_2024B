#include <iostream>
#include <stdio.h>
using namespace std;
int Cedula;
int Audifonos, Mouse, Cusb, Ddp, Cweb, Teclado, Parlantes;
int TotalAudifonos, TotalMouse, TotalCusb, TotalDdp, TotalCweb, TotalTeclado, TotalParlantes, Compra, Descuento, IVA, TOTAL;
int NArticulos=0, Codigo=0;

int main() {
    cout << "Ingrese su numero de cedula: ";
    cin >> Cedula;
    while (Cedula<0){
        cout << "ERROR. Ingrese un numero de cedula valido" <<endl;
        cout << "Ingrese su numero de cedula: ";
        cin >> Cedula;
    }
    
    cout << "A continuacion encontrara la lista de articulos con sus valores:" <<endl;
    cout << "ARTICULOS                VALOR             CODIGO " <<endl;
    cout << "Audifonos................12000...............1    " <<endl;
    cout << "Mouse....................30000...............2    " <<endl;
    cout << "Cable USB................5000................3    " <<endl;
    cout << "Disco duro portable......80000...............4    " <<endl;
    cout << "Camara Web...............45000...............5    " <<endl;
    cout << "Teclado..................23000...............6    " <<endl;
    cout << "Parlantes................70000...............7    " <<endl;
    
    cout << "Ingrese el numero de articulos que desea llevar: ";
    cin >> NArticulos;
        while (NArticulos<0){
        cout << "ERROR. Ingrese un numero de articulos valido" <<endl;
        cout << "Ingrese el numero de articulos que desea llevar: ";
        cin >> NArticulos;
    }
    
    for (int n=0 ; n<NArticulos ; n++){
        cout << "Ingrese el codigo del artículo: ";
        cin >> Codigo;
        while ((Codigo<1) || (Codigo>7)){
            cout << "ERROR. Ingrese un codigo valido (De 1 a 7)" <<endl;
            cin >> Codigo;
        }
        if (Codigo==1){
            Audifonos++;
        }
        else if (Codigo==2){
            Mouse++;
        }
        else if (Codigo==3){
            Cusb++;
        }
        else if (Codigo==4){
            Ddp++;
        }
        else if (Codigo==5){
            Cweb++;
        }
        else if (Codigo==6){
            Teclado++;
        }
        else if (Codigo==7){
            Parlantes++;
        }
        else{
            cout << "ERROR. Ingrese un código válido, reinice la app" <<endl;
        }
    }
    
    TotalAudifonos=(Audifonos*int(12000));
    TotalMouse=(Mouse*int(30000));
    TotalCusb=(Cusb*int(5000));
    TotalDdp=(Ddp*int(80000));
    TotalCweb=(Cweb*int(45000));
    TotalTeclado=(Teclado*int(23000));
    TotalParlantes=(Parlantes*int(70000));
    Compra=TotalAudifonos+TotalMouse+TotalCusb+TotalDdp+TotalCweb+TotalTeclado+TotalParlantes;
    
    if ((Compra>=100000) || (Compra<150000)){
        Descuento=(Compra*0.95);
    }
    else if ((Compra>=150000) || (Compra<200000)){
        Descuento=(Compra*0.90);
    }
    else if (Compra>=200000){
        Descuento=(Compra*0.85);
    }
    
    NArticulos=Audifonos+Mouse+Cusb+Ddp+Cweb+Teclado+Parlantes;
    
    IVA=Descuento*0.19;
    TOTAL=Descuento+IVA;
    
    cout << "\nCedula cliente:...................." <<Cedula;
    cout << "\nNumero de articulos comprados:....." <<NArticulos;
    cout << "\nIVA:..............................." <<IVA;
    cout << "\nTOTAl COMPRA:......................" <<TOTAL;
    
    return 0;
}