#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <random>
#include <ctime>
#include <set>

using namespace std;

vector<string> obtener_dominio(const string& nombre_archivo, size_t longitud);

string elegir_palabra(const vector<string>& palabras);

string mostrar_palabra_censurada(const string& palabra, const set<char>& letras_adivinadas);

#endif // UTILS_H
