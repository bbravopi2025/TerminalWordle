#include "utils.h"
#include <set>
#include <string>

using namespace std;

string mostrar_palabra_censurada(const string& palabra, set<char>& letras_adivinadas, const string& intento){

	string resultado = "";

	for (size_t i=0; i<intento.size() && i<palabra.size(); i++){
		letras_adivinadas.insert(intento[i]);}


	for (char c : palabra){
		if (letras_adivinadas.count(c)){
			resultado +=c;}
		else {
			resultado += "_";}
		resultado += " ";}
	return resultado;
}


