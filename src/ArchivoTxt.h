#ifndef ARCHIVO_TXT_H
#define ARCHIVO_TXT_H

#include "Archivo.h"
#include "ProgramaAcademico.h"
#include "Consolidado.h"
#include "GestorArchivos.h"
#include "SNIESController.h"
#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <sstream>
#include <list>
#include <algorithm>

// Clase para manejar archivos TXT
class ArchivoTXT : public Archivo
{
public:
    void guardar(const std::string &ruta, map<int, ProgramaAcademico *> &mapadeProgramasAcademicos, vector<string> etiquetasColumnas) override;
};

#endif
