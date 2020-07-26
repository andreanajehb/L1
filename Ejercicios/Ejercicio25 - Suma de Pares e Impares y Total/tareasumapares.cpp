
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{   
    int pares = 0;
    int impares = 0;
    int total = 0;

    cout << endl;

    //proceso

    for (int i = 1; i <= 10; i++)
    {
       if (i % 2 == 0){
           pares = pares + i;
       }
       cout << i << " " ;


       if (i % 2 == 1){
           impares = impares + i;
       }
       
       total = pares + impares;
    }

    //fin del proceso

    cout << endl;
    cout << endl;
    cout << "Total pares: " << pares << endl;
    cout << "Total impares: " << impares << endl;
    cout << "Total de Pares e Impares: " << total << endl;
    cout << endl;

    return 0;
}