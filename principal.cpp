//ARCHIVO PRINCIPAL
#include <iostream>
#include <stdlib.h>
using namespace std;
#include "colaborador1.h"
#include "colaborador2.h"
#include "colaborador3.h"
#include "colaborador4.h"
//#include "colaborador5.h"

void mostrar(float (*r)[5])
{
	cout<<endl<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<r[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int main() {
	int op,flag;
	float matriz1[5][5], matriz2[5][5], resultado[5][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
	do{
		system("cls");
		cout<<"OPERACIONES CON MATRICES EN 2 DIMENSIONES"<<endl<<endl;
		cout<<"1 .- Ingresar los valores de las matrices \n";
		cout<<"2 .- Obtener el producto de las dos matrices \n";
		cout<<"3 .- Mostrar la potencia 2 de la primera matriz \n";
		cout<<"4 .- Mostrar la transpuesta de la primer matriz \n";
		cout<<"5 .- Calcular la media y varianza y compararlas \n";
		cout<<"0 .- Salir del menu \n";
		cout<<" Ingrese una opcion : ";
		cin>>op;
		switch(op){
			case 1:
				ingresar(matriz1,matriz2);
				mostrar(matriz1);
				mostrar(matriz2);
				break;
			case 2:
				producto(matriz1,matriz2,resultado);
				mostrar(resultado);
				break;
			case 3:
				potencia(matriz1,2,resultado);
				mostrar(resultado);
				break;
			case 4:
				transpuesta(matriz1,resultado);
				mostrar(resultado);
				break;
			//case 5:
				//mediayvarianza(matriz1,matriz2);
				//break;
		}
		if(op!=0){
			cout<<"Opcion no permitida !\n" << "Press Enter to continue\n";
			flag=cin.ignore().get();
		}
		if(op==0){
			cout<<"Salimos del Sistema: "<<endl;
		}
	}while(op!=0);
	
	return (0);
}
