#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <random>
#include <ctime>

using namespace std;

// Función que obtiene una lista de strings en un archivo admitidos según requerimientos de longitud
vector<string> obtener_dominio(const string& nombre_archivo, size_t longitud){
	vector<string> palabras;
	ifstream archivo(nombre_archivo);

	if (!archivo){
		cerr << "Error al abrir el archivo\n";
		return palabras;
	}

	string palabra;
	while (archivo >> palabra){
		if (palabra.length() == longitud){
			palabras.push_back(palabra);
		}
	}

	archivo.close();
	return palabras;
}

// Función para elegir palabra en base a RNG basado en ctime
string elegir_palabra(const vector<string>& palabras){
	if palabras.empty(){return "";}

	static mt19937 rng(static_cast<unsigned int>(time(nullptr)));

	uniform_int_distribution<size_t> dist(0, palabras.size()-1);
	return palabras[dist(rng)];
}
