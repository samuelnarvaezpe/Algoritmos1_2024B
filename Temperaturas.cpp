#include <iostream>
using namespace std;

int main() {
    const int TEMPMAX = 5; //
    int i, temp[TEMPMAX], tempx;
    
    for (i = 0; i < TEMPMAX; i++){ //Con esto se van introduciendo las temperaturas
        cout << "Introduzca la temperatura "<<i+1<<": ";
        cin >> temp[i];
    }
    cout << endl;
    
    for (i = 0; i < TEMPMAX; i++) //Con esto se van imprimiendo las temperaturas introducidas anteriormente
    cout << "La temperatura "<<i+1<<" es: "<<temp[i]<<endl;
    cout << "Ingrese la temperatura que desea ver: ";
    cin >> tempx;
    cout << "La temperatura solicitada es: "<<temp[tempx-1]<<endl; //Se le resta 1 ya que como tempx empieza en 0, se le resta un 1 para que muestre la temperatura que es
    cout << endl;

    
    for (i = TEMPMAX-1; i>=0; i--) //Con esto se van imprimiendo las temperaturas introducidas en orden decreciente
    cout << "La temperatura "<<i+1<<" es: "<<temp[i]<<endl;
    cout << "Ingrese la temperatura que desea ver: ";
    cin >> tempx;
    cout << "La temperatura solicitada es: "<<temp[tempx-1]<<endl; //Se le resta 1 ya que como tempx empieza en 0, se le resta un 1 para que muestre la temperatura que es
    
    return 0;
}