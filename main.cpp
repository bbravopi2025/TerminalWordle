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

        set<char> palabras_adivinadas;
        cout << "Adivina la palabra letra a letra: " << endl;

	// Logica juego mismo
	for (int i=0; i<5; i++){
		char intento;
		cout << "Intento " << i+1 << ": ";
		cin >> intento;
		palabras_adivinadas.insert(intento);
		cout << mostrar_palabra_censurada(palabra, palabras_adivinadas) << endl;}
	cout << "La palabra era: " << palabra << endl;
	return 0;

}
