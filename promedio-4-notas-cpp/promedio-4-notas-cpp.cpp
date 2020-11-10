// promedio-4-notas-cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Autor: Cristian Antonio Escalante Hernandez
// Github: crisanto-dev
// Problema
/* Escriba un programa que calcule el promedio de 4 notas ingresadas por el usuario */

#include <iostream>

using namespace std;

int main()
{
	cout << "Autor: Cristian Antonio Escalante Hernandez\n";
	cout << "Github: crisanto-dev\n";
	cout << "WARNING: Cualquier caracter que no sea digito se tomara como 0\n";
	cout << "Promedio de 4 notas\n";
	cout << "Rango de notas 0 - 10 \n";

	int limit = 4;
	float notas[4], resultado, sumatoria = 0;
	bool bandera;

	for (int i = 0; i < limit; i++)
	{
		bandera = true;
		cout << "Ingrese la nota numero " << i + 1 << ": ";
		do
		{
			cin >> notas[i];
			if (notas[i] >= 0 && notas[i] <= 10)
			{
				bandera = false;
			}
			else
			{
				cout << "Por favor ingrese correctamente la nota numero " << (i + 1) << ": ";
			}
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		} while (bandera);

		sumatoria += notas[i];
	}

	resultado = sumatoria / limit;

	cout << "El promedio de las 4 notas es de: " << resultado << "\n";
	cout << "Fin del programa";

	return 0;

}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


