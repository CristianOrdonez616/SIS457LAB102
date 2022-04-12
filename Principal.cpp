#include <iostream>
using namespace std;
int main() {
	int repetir=0;
	cout << "Biografía" << endl;
	do {
		cout << "Mi persona es un estudiante de la carrera ing. en Sistemas, tengo afición a varias cosas"<<endl<<"Entre estos estan interes hacia la música, programacion, videojugos, series, gimnasio, cocina, series, etc"<<endl;
		cout << "Naci en Sucre y realize mis estudios escolares en esta ciudad, al salir del colegio decidi estudiar en la paz para experimentar una vida independiente " << endl;
		cout << "viviendo solo no pude gestionar mi vida responsablemente, en ese caso me vi retornando a sucre e ingresando a la carrera que curso actualmente " << endl << "pero habiendo finalizado el 2do semestre justo antes de la pandemia consegui ganar un puesto de trabajo en una ONG, al cual me postule de manera improvisada. y paralize mis estudios 1 año y medio" << endl;
		cout << "teniendo la experiencia laboral al finalizar mi contrato decidi no renovar mi contrato para retornar a mis estudios, pese a que ahora fuese virtual no consegui estudiar y trabajar simultaneamente, y pense que seria de mucha utilidad finalizar mi carrera para en un futuro poder escalar de puesto" << endl<<endl<<endl;
		cout << "DESEA VOLVER A VISUALIZAR LA BIOGRAFIA?" << endl << "Para volver a visualizar introduzca:1 De otra manera introduzca cualquier otro caracter" << endl; cin >> repetir;
	} while (repetir == 1);
}