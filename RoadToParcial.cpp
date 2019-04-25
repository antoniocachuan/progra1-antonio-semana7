// RoadToParcial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
    //Entrada
	char lugarIngreso='X';
	char tipoDispositivo;
	int horaIngreso;

	int sumA = 0;
	int sumB = 0;
	int sumC = 0;

	int sumMad = 0;
	int sumMan = 0;
	int sumTar = 0;
	int sumNoc = 0;

	int sumCe = 0;
	int sumTa = 0;
	int sumCo = 0;

	//Restricciones
	//variables pertenecen a {A, B, C, G, entero positivo, C, T, U}

	//Lógica
	while (1) {
		
		cout << "Lugar Ingreso [A, B o C]: ";
		cin >> lugarIngreso;
		if (toupper(lugarIngreso) == 'G') {
			break;
		}

		switch (lugarIngreso)
		{
		case 'A':
			sumA++;
			break;
		case 'B':
			sumB++;
			break;
		case 'C':
			sumC++;
			break;
		default:
			cout << "Por favor ingrese un lugar de ingreso correcto. ";
			break;
		}

		cout << "Hora Ingreso: ";
		cin >> horaIngreso;
		if (horaIngreso>= 0 && horaIngreso<=5) {
			sumMad++;
		}
		else {
			if (horaIngreso >= 6 && horaIngreso <= 12) {
				sumMan++;
			}
			else {
				if (horaIngreso >= 13 && horaIngreso <= 17) {
					sumTar++;
				}
				else {
					if (horaIngreso >= 18 && horaIngreso <= 23) {
						sumNoc++;
					}
					else {
						cout << "Por favor ingrese una hora dentro del rango 0-23 ";
					}
				}
			}
		}


		cout << "Tipo Dispositivo [C, T o U]: ";
		cin >> tipoDispositivo;
		switch (tipoDispositivo)
		{
		case 'C':
			sumCe++;
			break;
		case 'T':
			sumTa++;
			break;
		case 'U':
			sumCo++;
			break;
		default:
			cout << "Por favor ingrese un tipo de dispositivo correcto. ";
			break;
		}
	}

	//Salida
	cout << "************************************" << endl;
	cout << "Lugar Ingreso " << endl;
	cout << "Lima "<< sumA << endl;
	cout << "Otra region " << sumB << endl;
	cout << "Otro pais " << sumC << endl;
	
	cout << "************************************" << endl;
	cout << "Hora Ingreso " << endl;
	cout << "Madrugada " << sumMad << endl;
	cout << "Manana " << sumMan << endl;
	cout << "Tarde " << sumTar << endl;
	cout << "Noche " << sumNoc << endl;
	
	cout << "************************************" << endl;
	cout << "Tipo dispositivo " << endl;
	cout << "Celular " << sumCe << endl;
	cout << "Tablet " << sumTa << endl;
	cout << "Computador " << sumCo << endl;
}


/* UNO
//Entrada
	double a, n;
	double m;
	int i = 1;

	//Restricciones
	//n>0
	//a=>1 && a<=6

	//Lógica
	cout << "Ingrese n:";
	cin >> n;

	cout << "Ingrese a:";
	cin >> a;

	m = 0;

	while (i<=n) {
		if (i == 1) {
			m = 1/a;
			i++;
			continue;
		}
		m = m + 1/(pow(2,i)*a);
		i++;
	}

	//Salida
	cout << "La suma es: "<<m;

*/