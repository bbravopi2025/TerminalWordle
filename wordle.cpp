#include "utils.h"
#include <set>

using namespace std;

string mostrar_palabra_censurada(const string& palabra, const set<char>& letras_adivinadas){

	string resultado = "";
	for (char c : palabra){
		if (letras_adivinadas.count(c)){
			resultado +=c;}
		else {
			resultado += "_";}
		resultado += " ";}
	return resultado;
}


