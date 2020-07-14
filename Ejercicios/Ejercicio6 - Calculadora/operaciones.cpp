#include <iostream>

using namespace std;


int main(int argc, char** argv) {
	
	double a = 10;
	double b = 12;
	double suma = 0;
    double resta =0;
    double multiplicacion =0;
    double division =0;

	cout << "Ingrese el valor de a: ";
	cin >> a;
	
	cout <<endl;
	
	cout << "Ingrese el valor de b: ";
	cin >> b;
	
	
	suma  = a + b;
    resta = a - b;
    multiplicacion = a * b;
    division = a / b;

	cout << endl;
	cout << "La suma de a + b es: " <<suma;

    cout << endl;
	cout << "La resta de a - b es: " <<resta;

    cout << endl;
	cout << "La multiplicacion de a * b es: " <<multiplicacion;

    cout << endl;
	cout << "La division de a / b es: " <<division;
	
	
	return 0;
}
