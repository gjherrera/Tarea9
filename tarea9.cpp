#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main ()
{
	int opcion = 0,	num1 = 0, num2 = 0, SumaDados;
	
	cout << "***************************** "<<endl;
	cout << "       Bienvenidos "           <<endl;
	cout <<" Juego de Tirar los Dados "     <<endl;
	cout << "***************************** "<<endl;
	
	cout << "\nIngrese 1 para tirar los dados " <<endl;
	cout << "Ingrese 0 para salir "<<endl;
	cout <<endl;
	cin>>opcion;
	cout <<endl;
	
	if (opcion == 1)
	{
	srand(time(NULL));
	
	num1 = rand() % 6 + 1;
	cout << " Dado 1 : "<< num1<<endl;
	
	num2 = rand() % 6 + 1;
	cout << " Dado 2 : "<< num2<<endl;
	
	SumaDados = num1 + num2;
	
	cout <<endl; 
	cout << "La suma de los dados es de : "<<SumaDados<<endl;
	}
	else
	{
	cout <<endl;
	cout << "Gracias por jugar! ";
	}
	
	return 0;
}
