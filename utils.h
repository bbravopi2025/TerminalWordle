#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <random>
#include <ctime>

using namespace std;

vector<string> obtener_dominio(const string& nombre_archivo, size_t longitud);

string elegir_palabra(const vector<string>& palabras);



#endif // UTILS_H
