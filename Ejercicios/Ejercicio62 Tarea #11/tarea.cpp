#include <iostream>
#include <stdlib.h>
#include <time.h>  

using namespace std;

int main(int argc, char const *argv[])
{



int sumas = 0;
int arreglo [5][5];



/* 2) Inicializar cada elemento del arreglo con valores random */

srand(time(NULL));

cout << endl;


for (int filas = 0; filas < 5; filas++)
{
    for(int columnas = 0; columnas < 5; columnas++)
    {
        arreglo[filas][columnas] = rand ()% 99 + 1;
        
        cout << " [ " << arreglo [filas] [columnas] << " ] " << " " ;

        sumas = sumas + arreglo [filas] [columnas];
    }
    cout << endl;
}
    cout << endl;


    /* 3) Sumar todos los valores del arreglo bidimensional y mostrar un mensaje "Total Suma: " */
     cout << "El Total es: " << sumas << endl;



    return 0;
}