#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
     int opcion = 0;

     while(true)
    {   system ("cls");
        cout << "****";
        cout << "MENU";
        cout << "****";

        cout << endl;

        cout << "1 - Cafe y granitas" << endl;
        cout << "2 - Reposteria" << endl;
        cout << "0 - SALIR" << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcion;

         if (opcion == 0)
        {   system("cls");
            break;
        }
        
        switch (opcion)
        {
        case 1:
        {
            system ("cls");
            cout << "Estas en el menu de cafe y granitas" <<endl <<endl;
            system("pause");
            break;
        }
        case 2:
        {
            system ("cls");
            cout << "Estas en el menu de reposteria" << endl << endl;
            system("pause");
            break;
        }
          default:
          { system("cls");
            cout << "Ingrese una opcion valida (0,1,2)" << endl;
            system("pause");
               break;
          }
        }
    }        
    
    cout << endl;
    cout << "Saliste del sistema";
   
    return 0;
}