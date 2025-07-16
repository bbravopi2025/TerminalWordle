#include <iostream>
#include "utils.h"
#include <string>
#include <vector>

using namespace std;

bool palabra_completa(const string& palabra, set<char>& letras_adivinadas){
	for (char c : palabra){
		if (!letras_adivinadas.count(c)){
			return false;}}
	return true;
}

int main(){
// PARAMETROS
	int intentos = 0;
	const int MAX_INTENTOS = 6;


// INPUTS: ARCHIVO Y DIFICULTAD
	string nombre_archivo;
	int dificultad;
	cout << "Cargar archivo de texto: ";
	cin >> nombre_archivo;

	cout << "Elige la dificultad:\n[4] - Facil\n[5] - Medio\n[6] - Dificil" << endl;
	cin >> dificultad;
	cin.ignore();

// SE VALIDA EL ARCHIVO Y SE OBTIENE LA PALABRA

	vector<string> dominio = obtener_dominio(nombre_archivo, dificultad);

	string palabra = elegir_palabra(dominio);

// SE INICIALIZA SET DE CHAR
        set<char> palabras_adivinadas;
        cout << "Adivina la palabra letra a letra: " << endl;

// CANTIDAD DE INTENTOS: 5
	while (!palabra_completa(palabra, palabras_adivinadas) && intentos < MAX_INTENTOS){
		string intento;
		if (intentos == 0){cout << mostrar_palabra_censurada(palabra, palabras_adivinadas, intento) << endl;}

		else {cout << "Intento " << intentos << ": ";
		getline(cin, intento);

		cout << mostrar_palabra_censurada(palabra, palabras_adivinadas, intento) << endl;}
		intentos++;}

	cout << "La palabra era: " << palabra << endl;
	return 0;

}
