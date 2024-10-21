#ifndef ARCHIVO_H
#define ARCHIVO_H

#include <string>
#include <map>
#include "ProgramaAcademico.h"

using namespace std;

// Clase abstracta base
class Archivo
{
public:
    virtual void guardar(const std::string &ruta, map<int, ProgramaAcademico *> &mapadeProgramasAcademicos, vector<string> etiquetasColumnas) = 0;
    virtual ~Archivo() = default; // Destructor virtual
};

#endif
