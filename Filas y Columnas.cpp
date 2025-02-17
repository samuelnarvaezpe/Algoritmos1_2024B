#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
    const int NUMFILAS = 3;
    const int NUMCOLS = 4;
    int i, j;
    int val[NUMFILAS][NUMCOLS] ={ 8, 16,  9, 52,
                                  3, 15, 27,  6,
                                 14, 25,  2, 10};
    for (i = 0; 1 < NUMFILAS; i++)
    {
    cout << endl;
    for (j = 0; j < NUMCOLS; j++)
    {
    cout << setw(5) << val[i][j];
}
}
// multiplica cada elemento por 10 y lo despliega
    cout << "\nDespliegue de elementos multiplicados";
    for (i = 0; i < NUMFILAS; i++)
    {
        cout << endl;
        for (j = 0; j < NUMCOLS; j++)
        {
        val[i][j] = val[i][j] * 10;
        cout << setw(5) << val[i][j];
        }    
    }
    cout << endl;
    return 0;
}