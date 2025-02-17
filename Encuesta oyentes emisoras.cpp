#include <iostream>
#include <stdio.h>
using namespace std;
int NEncuestados=0;
string Nombre, Cedula;
int TP=0, PE=0, RD=0, RS=0, Codigo=0;
float PorcentajeTP, PorcentajePE, PorcentajeRD, PorcentajeRS;

int main() {
    cout << "Ingrese el número de encuestados: ";
    cin >> NEncuestados;
    
    while (NEncuestados<0){
        cout << "ERROR. Ingrese un número de encuestados válido" <<endl;
        cout << "Ingrese el número de encuestados: ";
        cin >> NEncuestados;
    }
    
    cout << "       EMISORA         CÓDIGO   " <<endl;
    cout << "     Tropiparce          1      " <<endl;
    cout << "  Plancha Estación       2      " <<endl;
    cout << "     Radio Dos           3      " <<endl;
    cout << "    Rasca Sound          4      " <<endl;
    cout << "INGRESE LA INFORMACIÓN DEL USUARIO Y EL CÓDIGO DE LA EMISORA QUE MÁS ESCUCHA: " <<endl;
    
    for (int n=0 ; n<NEncuestados ; n++){
        cout << "Nombre: ";
        cin >> Nombre;
        cout << "Cedula: ";
        cin >> Cedula;
        cout << "Código Emisora: ";
        cin >> Codigo; 
        while ((Codigo<1)||(Codigo>4)){
            cout << "ERROR. Ingrese un código válido (De 1 a 4)" <<endl;
            cout << "Ingrese el código de la emisora: ";
            cin >> Codigo;
        }
        if (Codigo==1){
            TP++;
        }
        else if (Codigo==2){
            PE++;
        }
        else if (Codigo==3){
            RD++;
        }
        else if (Codigo==4){
            RS++;
        }
        else{
            cout << "ERROR. Ingrese un código válido, reinicie la app" <<endl;
        }
    }
    cout << "Cantidad de oyentes de Tropiparce:............." <<TP <<endl;
    cout << "Cantidad de oyentes de Plancha Estación:......." <<PE <<endl;
    cout << "Cantidad de oyentes de Radio Dos:.............." <<RD <<endl;
    cout << "Cantidad de oyentes de Rasca Sound:............" <<RS <<endl;
    
    PorcentajeTP=(float(TP)/float(NEncuestados))*100;
    cout << "\nPorcentaje de oyentes de Tropiparce:.........." <<PorcentajeTP <<"%";
    PorcentajePE=(float(PE)/float(NEncuestados))*100;
    cout << "\nPorcentaje de oyentes de Plancha Estación:...." <<PorcentajePE <<"%";
    PorcentajeRD=(float(RD)/float(NEncuestados))*100;
    cout << "\nPorcentaje de oyentes de Radio Dos:..........." <<PorcentajeRD <<"%";
    PorcentajeRS=(float(RS)/float(NEncuestados))*100;
    cout << "\nPorcentaje de oyentes de Rasca Sound:........." <<PorcentajeRS <<"%";
    
    return 0;
}
