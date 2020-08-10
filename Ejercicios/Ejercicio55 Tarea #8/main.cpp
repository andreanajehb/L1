#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double numero=0;
    double resultadoDeRaiz=0;
    
    

    cout<<"Digite el numero al cual quiere sacar la raiz cuadrada: ";
	cin>>numero ;
    resultadoDeRaiz=(sqrt(numero));
    cout << endl;

    
    system("cls");


    cout<<endl;
    cout<<"La raiz cuadrada de "<<numero<<" es: "<<resultadoDeRaiz;
    
    return 0;
}