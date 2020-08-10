#include <iostream>
#include <stdlib.h> 
#include <time.h>

using namespace std;






void lanzamiento (int cantidad)
{
  
  if (cantidad == 1)
    {
      cout << "Presione \"ENTER\" para lanzar el dado #1";
    }
  else
    {
      cout << "Presione \"ENTER\" para lanzar el dado #2";
    
    }
 cin.ignore();
}





int tirardado ()
{
  int numero;
  srand (time (0));
  numero = rand () % 6 + 1;
  cout << "Salio " << numero << endl;
  return numero;
}


int dado (int pdado, int sdado)
{
  cout << "Tienes que moverte " << pdado + sdado << " casillas" << endl;
  cout << endl;
  return pdado + sdado;
}





int main(int argc, char const *argv[])
{
int total, primerdado, segundodado;

  lanzamiento (1);
  primerdado = tirardado ();
  lanzamiento (2);
  segundodado = tirardado ();
  total = dado(primerdado, segundodado);


    return 0;
}