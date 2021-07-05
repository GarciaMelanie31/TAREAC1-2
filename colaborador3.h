//COLABORADOR3 - INGRESE SU NOMBRE
void potencia(float (*m1)[5], int p, float (*r)[5])
{
#include <iostream>

#include <cstdlib>



using namespace std;



    int base;

    int exponente;

    int resultado=0;



int main(){



    cout << "Este programa le permite calcular potencias." << endl;

    cout << "Ingrese la base ";

    cin >> base;

    cout << "Ingrese el exponente ";

    cin >> exponente;

int x=1;

while (x<exponente){

if (resultado<base){

resultado=base*base;

}

else{

resultado=resultado*base;

}

x++;

}

cout << "El resultado es: " << resultado << endl;



system("pause");

return 0;

}
  
  
}
