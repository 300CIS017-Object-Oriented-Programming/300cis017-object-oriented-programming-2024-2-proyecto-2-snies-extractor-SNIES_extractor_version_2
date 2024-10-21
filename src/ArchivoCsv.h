#ifndef ARCHIVO_CSV_H
#define ARCHIVO_CSV_H

#include "Archivo.h"

// Clase para manejar archivos CSV
class ArchivoCSV : public Archivo
{
public:
    void guardar(const std::string &ruta, map<int, ProgramaAcademico *> &mapadeProgramasAcademicos, vector<string> etiquetasColumnas) override;
};

#endif
