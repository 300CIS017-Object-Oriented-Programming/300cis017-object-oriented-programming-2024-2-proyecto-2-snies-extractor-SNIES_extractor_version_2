#include "ProgramaAcademico.h"

using namespace std;

ProgramaAcademico::ProgramaAcademico()
{
    //consolidados = vector<Consolidado *>(8);
}

void ProgramaAcademico:: agregarElementoTipoString(string& nombreDato, string& dato)
{
    mapaDatosString[nombreDato] = dato;
}

void ProgramaAcademico:: agregarElementoTipoInt(string& nombreDato, int dato)
{
    mapaDatosEnteros[nombreDato] = dato;
}

string ProgramaAcademico::consultarDatoString(string& clave)
{
    return mapaDatosString.at(clave);
}

int ProgramaAcademico::consultarDatoInt(string& clave)
{
    return mapaDatosEnteros.at(clave);
}

void ProgramaAcademico::setConsolidado(string& infoSexo, int infoAno , int infoSemestre,Consolidado *nuevoConsolidado)
{
    string claveConsolidado = infoSexo + "-" + to_string(infoAno) + to_string(infoSemestre);
    consolidados[claveConsolidado] = nuevoConsolidado;
}

Consolidado *ProgramaAcademico::getConsolidado(string& claveConsolidados)
{
    return consolidados[claveConsolidados];
}

ProgramaAcademico::~ProgramaAcademico()
{
    for (auto& pair : consolidados)
    {
        delete pair.second;
    }
    consolidados.clear();
}


Consolidado* ProgramaAcademico::buscarConsolidadoPorDato(string& infoSexo, int infoAno , int infoSemestre)
{
    map<string,Consolidado*>::iterator iteradorConsolidado = consolidados.begin();
    string claveConsolidado = infoSexo + "-" + to_string(infoAno) + to_string(infoSemestre);
    return consolidados[claveConsolidado];
}