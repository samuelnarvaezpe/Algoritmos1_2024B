#include <iostream>
using namespace std;
void Area(float, float);
int i;
int main() {
    
float Base, Altura;
    for (i = 0; i < 4; i++){

        cout << "\nIngrese la base del triangulo " <<i+1<<": ";
        cin >> Base;
        cout << "\nIngrese la altura del triangulo " <<i+1<<": ";
        cin >> Altura;
        Area(Base, Altura);
    }
return 0;
}
void Area(float b, float a) {
    float Areax;
    Areax=(b*a)/2;
    cout << "\nEl area del triangulo " <<i+1<<" es: " <<Areax;
    cout << "\n-----------------------------------------";
    return;
}