#include <iostream>
#include "utils.h"
#include <string>
#include <vector>

using namespace std;

int main(){
	string nombre_archivo;
	int dificultad;
	cout << "Cargar archivo de texto: ";
	cin >> nombre_archivo;

	cout << "Elige la dificultad:\n[4] - Facil\n[5] - Medio\n[6] - Dificil" << endl;
	cin >> dificultad;

	vector<string> dominio = obtener_dominio(nombre_archivo, dificultad);

	string palabra = elegir_palabra(dominio);

	cout << palabra << endl;

	return 0;

}
